%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define HISTORY_SIZE 200

    // Lex/Bison external variables
    extern int yylineno;
    extern int yylex();
    extern int yyparce();
    extern void yyerror(char *);
    extern char* yytext;
    extern FILE *yyin;
    extern FILE *yyout;

    // Flags
    static int last_was_found = 0;
    static int active_was_found = 0;
    int not_in_history = 0;

    // Counters
    int j = 0;
    static int i = 0;
    static int list_counter = 0;

    // Strings
    char* history[HISTORY_SIZE];
    char* temp_val = "";

%}

%union {
    char*   strval;
    int     intval;
    float   flval;
}

%token <intval> T_INT 
%token <flval>  T_FLOAT 
%token <strval> T_QUOTE T_COLON T_COMMA T_LBRACKET T_RBRACKET T_LBRACE T_RBRACE
%token <strval> T_WORD T_LAST T_ACTIVE T_GAME_ID T_DRAW_ID T_DRAW_TIME T_STATUS T_DRAW_BREAK
%token <strval> T_VISUAL_DRAW T_PRICE_POINTS T_AMOUNT T_WINNING_NUMBERS T_LIST T_BONUS T_PRIZE_CATEGORIES 
%token <strval> T_ID T_DIVIDENT T_WINNERS T_DISTRIBUTED T_JACKPOT T_FIXED T_CATEGORY_TYPE T_GAME_TYPE 
%token <strval> T_MINIMUM_DISTRIBUTED T_WAGER_STATISTICS T_COLUMNS T_WAGERS T_ADD_ON

%type <strval> string keyword_tokens object content pair table objects
%type <intval> integers

%left T_QUOTE T_COLON T_COMMA T_LBRACKET T_RBRACKET T_LBRACE T_RBRACE

%%
/* ========[ RULES ]======== */

json: object;

object  : T_LBRACE T_RBRACE
        | T_LBRACE content T_RBRACE {$$ = $2;}
        ;

content : pair {$$ = $1;}
        | pair T_COMMA content {$$ = $1;}
        ;

pair    : string T_COLON string { $$ = $1;

            /* Έλεγχος άκυρων στοιχείων */
            if (!((strcmp($1, "status") == 0) || (strcmp($1, "gameType") == 0))) {
                yyerror("Δεν υπάρχει αυτό το στοιχείο.");
            }

            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            // Το i είναι +1 λόγω του δεύτερου string
            if (strcmp($1, "status") == 0) {
                if (i != 6 && i != 97)
                    yyerror("Το \"status\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "gameType") == 0) {
                if (i != 23 && i != 33 && i != 42 && i != 51 && i != 60 && i != 69 && i != 78 && i != 87 && i != 111
                    && i != 121 && i != 130 && i != 139 && i != 128 && i != 148 && i != 157 && i != 166 && i != 175)
                    yyerror("Το \"gameType\" δεν ανήκει εδώ.");
            }

            /* Έλεγχος τύπου στοιχείων */
            if (strcmp($1, "gameId") == 0)
                yyerror("Το \"gameId\" δεν είναι τύπου string");
            else if (strcmp($1, "drawId") == 0)
                yyerror("Το \"drawId\" δεν είναι τύπου string");
            else if (strcmp($1, "drawTime") == 0)
                yyerror("Το \"drawTime\" δεν είναι τύπου string");
            else if (strcmp($1, "drawBreak") == 0)
                yyerror("Το \"drawBreak\" δεν είνα`ι τύπου string");
            else if (strcmp($1, "visualDraw") == 0)
                yyerror("Το \"visualDraw\" δεν είναι τύπου string");
            else if (strcmp($1, "pricePoints") == 0)
                yyerror("Το \"pricePoints\" δεν είναι τύπου string");
            else if (strcmp($1, "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου string");
            else if (strcmp($1, "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου string");
            else if (strcmp($1, "wagerStatistics") == 0)
                yyerror("Το \"wagerStatistics\" δεν είναι τύπου string");
            else if (strcmp($1, "list") == 0)
                yyerror("Το \"list\" δεν είναι τύπου string.");
            else if (strcmp($1, "bonus") == 0)
                yyerror("Το \"bonus\" δεν είναι τύπου string.");
            else if (strcmp($1, "amount") == 0)
                yyerror("Το \"amount\" δεν είναι τύπου string.");
            else if (strcmp($1, "id") == 0)
                yyerror("Το \"id\" δεν είναι τύπου string.");
            else if (strcmp($1, "divident") == 0)
                yyerror("Το \"divident\" δεν είναι τύπου string.");
            else if (strcmp($1, "winners") == 0)
                yyerror("Το \"winners\" δεν είναι τύπου string.");
            else if (strcmp($1, "distributed") == 0)
                yyerror("Το \"distributed\" δεν είναι τύπου string.");
            else if (strcmp($1, "jackpot") == 0)
                yyerror("Το \"jackpot\" δεν είναι τύπου string.");
            else if (strcmp($1, "fixed") == 0)
                yyerror("Το \"fixed\" δεν είναι τύπου string.");
            else if (strcmp($1, "categoryType") == 0)
                yyerror("Το \"categoryType\" δεν είναι τύπου string.");
            else if (strcmp($1, "minimumDistributed") == 0)
                yyerror("Το \"minimumDistributed\" δεν είναι τύπου string.");
            else if (strcmp($1, "columns") == 0)
                yyerror("Το \"columns\" δεν είναι τύπου string.");
            else if (strcmp($1, "wagers") == 0)
                yyerror("Το \"wagers\" δεν είναι τύπου string.");
            else if (strcmp($1, "addOn") == 0)
                yyerror("Το \"addOn\" δεν είναι τύπου string.");

        }
        
        | string T_COLON T_INT { $$ = $1;

            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            if (strcmp($1, "gameId") == 0) {
                if (i != 2 && i != 93)
                    yyerror("Το \"gameId\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "drawId") == 0) {
                if (i != 3 && i != 94)
                        yyerror("Το \"drawId\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "drawTime") == 0) {
                if (i != 4 && i != 95)
                        yyerror("Το \"drawTime\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "drawBreak") == 0) {
                if (i != 7 && i != 98)
                    yyerror("Το \"drawBreak\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "visualDraw") == 0) {
                if (i != 8 && i != 99)
                        yyerror("Το \"visualDraw\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "id") == 0) {
                if (i != 15 && i != 25 && i != 34 && i != 43 && i != 52 && i != 61 && i != 70 && i != 79 && i != 103
                    && i != 113 && i != 122 && i != 131 && i != 140 && i != 149 && i != 158 && i != 167 && i != 175)
                        yyerror("Το \"id\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "winners") == 0) {
                if (i != 17 && i != 27 && i != 36 && i != 45 && i != 54 && i != 63 && i != 72 && i != 81 && i != 105
                    && i != 115 && i != 124 && i != 133 && i != 142 && i != 151 && i != 160 && i != 169)
                        yyerror("Το \"winners\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "columns") == 0) {
                if (i != 89 && i != 177)
                        yyerror("Το \"columns\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "wagers") == 0) {
                if (i != 90 && i != 178)
                        yyerror("Το \"wagers\" δεν ανήκει εδώ.");
            }


            /* Έλεγχος τύπου στοιχείων */
            if (strcmp($1, "status") == 0)
                yyerror("Το \"status\" δεν είναι τύπου int");
            else if (strcmp($1, "pricePoints") == 0)
                yyerror("Το \"pricePoints\" δεν είναι τύπου int");
            else if (strcmp($1, "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου int");
            else if (strcmp($1, "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου int");
            else if (strcmp($1, "wagerStatistics") == 0)
                yyerror("Το \"wagerStatistics\" δεν είναι τύπου int");
            else if (strcmp($1, "list") == 0)
                yyerror("Το \"list\" δεν είναι τύπου int.");
            else if (strcmp($1, "bonus") == 0)
                yyerror("Το \"bonus\" δεν είναι τύπου int.");
            else if (strcmp($1, "amount") == 0)
                yyerror("Το \"amount\" δεν είναι τύπου int.");
            else if (strcmp($1, "id") == 0) {
                if (($3 > 8) || ($3 < 1))   //έλεγχος εύρος id
                    yyerror("Το \"id\" δεν περιλαμβάνει σωστό εύρος ακεραίων.");
            }
            else if (strcmp($1, "divident") == 0)
                yyerror("Το \"divident\" δεν είναι τύπου int.");
            else if (strcmp($1, "distributed") == 0)
                yyerror("Το \"distributed\" δεν είναι τύπου int.");
            else if (strcmp($1, "jackpot") == 0)
                yyerror("Το \"jackpot\" δεν είναι τύπου int.");
            else if (strcmp($1, "fixed") == 0)
                yyerror("Το \"fixed\" δεν είναι τύπου int.");
            else if (strcmp($1, "categoryType") == 0) {
                if (($3 > 2) || ($3 < 0))   //έλεγχος εύρος categoryType
                    yyerror("Το \"categoryType\" δεν περιλαμβάνει σωστό εύρος ακεραίων.");
            }
            else if (strcmp($1, "gameType") == 0)
                yyerror("Το \"gameType\" δεν είναι τύπου int.");
            else if (strcmp($1, "minimumDistributed") == 0)
                yyerror("Το \"minimumDistributed\" δεν είναι τύπου int.");
            else if (strcmp($1, "addOn") == 0)
                yyerror("Το \"addOn\" δεν είναι τύπου int.");

            /* Έλεγχος άκυρων στοιχείων */
            else if (!((strcmp($1, "gameId") == 0) || (strcmp($1, "drawId") == 0) || (strcmp($1, "drawTime") == 0) || (strcmp($1, "drawBreak") == 0) || (strcmp($1, "fixed") == 0) || (strcmp($1, "visualDraw") == 0)
                    || (strcmp($1, "id") == 0) || (strcmp($1, "winners") == 0) || (strcmp($1, "categoryType") == 0) || (strcmp($1, "columns") == 0) || (strcmp($1, "wagers") == 0) ))
                yyerror("Δεν υπάρχει αυτό το int στοιχείο.");
        }

        | string T_COLON T_FLOAT {
            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            if (strcmp($1, "amount") == 0) {
                if (i != 10 && i != 101)
                    yyerror("Το \"amount\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "divident") == 0) {
                if (i != 16 && i != 26 && i != 35 && i != 44 && i != 53 && i != 62 && i != 71 && i != 80 && i != 104
                    && i != 114 && i != 123 && i != 132 && i != 141 && i != 150 && i != 159 && i != 168)
                    yyerror("Το \"divident\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "distributed") == 0) {
                if (i != 18 && i != 28 && i != 37 && i != 46 && i != 55 && i != 64 && i != 73 && i != 82 && i != 106
                    && i != 116 && i != 125 && i != 134 && i != 143 && i != 152 && i != 161 && i != 170)
                    yyerror("Το \"distributed\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "jackpot") == 0) {
                if (i != 19 && i != 29 && i != 38 && i != 47 && i != 56 && i != 65 && i != 74 && i != 83 && i != 107
                    && i != 117 && i != 126 && i != 135 && i != 144 && i != 153 && i != 162 && i != 171)
                    yyerror("Το \"jackpot\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "fixed") == 0) {
                if (i != 20 && i != 30 && i != 39 && i != 48 && i != 57 && i != 66 && i != 75 && i != 84 && i != 108
                    && i != 118 && i != 127 && i != 136 && i != 145 && i != 154 && i != 163 && i != 172)
                    yyerror("Το \"fixed\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "minimumDistributed") == 0) {
                if (i != 24 && i != 112)
                    yyerror("Το \"amount\" δεν ανήκει εδώ.");
            }

            /* Έλεγχος τύπου δεδομένων */
            if (strcmp($1, "status") == 0)
                yyerror("Το \"status\" δεν είναι τύπου float");
            else if (strcmp($1, "gameId") == 0)
                yyerror("Το \"gameId\" δεν είναι τύπου float");
            else if (strcmp($1, "drawId") == 0)
                yyerror("Το \"drawId\" δεν είναι τύπου float");
            else if (strcmp($1, "drawTime") == 0)
                yyerror("Το \"drawTime\" δεν είναι τύπου float");
            else if (strcmp($1, "drawBreak") == 0)
                yyerror("Το \"drawBreak\" δεν είναι τύπου float");
            else if (strcmp($1, "visualDraw") == 0)
                yyerror("Το \"visualDraw\" δεν είναι τύπου float");
            else if (strcmp($1, "pricePoints") == 0)
                yyerror("Το \"pricePoints\" δεν είναι τύπου float.");
            else if (strcmp($1, "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου float.");
            else if (strcmp($1, "prizeCategories") == 0)
                yyerror("Το \"prizeCategories\" δεν είναι τύπου float.");
            else if (strcmp($1, "wagerStatistics") == 0)
                yyerror("Το \"wagerStatistics\" δεν είναι τύπου float.");
            else if (strcmp($1, "list") == 0)
                yyerror("Το \"list\" δεν είναι τύπου float.");
            else if (strcmp($1, "bonus") == 0)
                yyerror("Το \"bonus\" δεν είναι τύπου float.");
            else if (strcmp($1, "id") == 0)
                yyerror("Το \"id\" δεν είναι τύπου float.");
            else if (strcmp($1, "winners") == 0)
                yyerror("Το \"winners\" δεν είναι τύπου float.");
            else if (strcmp($1, "categoryType") == 0)
                yyerror("Το \"categoryType\" δεν είναι τύπου float.");
            else if (strcmp($1, "gameType") == 0)
                yyerror("Το \"gameType\" δεν είναι τύπου float.");
            else if (strcmp($1, "columns") == 0)
                yyerror("Το \"columns\" δεν είναι τύπου float.");
            else if (strcmp($1, "wagers") == 0)
                yyerror("Το \"wagers\" δεν είναι τύπου float.");
            else if (strcmp($1, "addOn") == 0)
                yyerror("Το \"addOn\" δεν είναι τύπου float.");
            
            /* Έλεγχος άκυρων στοιχείων */
            else if (!((strcmp($1, "amount") == 0) || (strcmp($1, "divident") == 0) || (strcmp($1, "distributed") == 0) || (strcmp($1, "jackpot") == 0) || (strcmp($1, "fixed") == 0) || (strcmp($1, "minimumDistributed") == 0)))
                yyerror("Δεν υπάρχει αυτό το float στοιχείο.");
        }


        | string T_COLON object { $$ = $1;
            /* Έλεγχος προτεραιότητας last - active */
            if (strcmp($1, "last") == 0) {
                if (active_was_found == 1 && last_was_found == 0)
                    yyerror("Έχει προηγηθεί το \"active\".");
                last_was_found = 1;
            }
            if (strcmp($1, "active") == 0) {
                if (active_was_found == 1)
                    yyerror("Έχει προηγηθεί το \"active\".");
                else if (last_was_found == 0 && active_was_found == 0)
                    yyerror("Κανονικά προηγείται το \"last\".");
                active_was_found = 1;
            }

            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            //Το i είναι το τελευταίο στοιχείο του { }
            if (strcmp($1, "pricePoints") == 0) {
                if (i != 10 && i != 101)
                    yyerror("Το \"pricePoints\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "winningNumbers") == 0) {
                if (i != 13)
                    yyerror("Το \"winningNumbers\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "wagerStatistics") == 0) {
                if (i != 91 && i != 179)
                    yyerror("Το \"wagerStatistics\" δεν ανήκει εδώ.");
            }

            /* Έλεγχος περιεχομένων pricePoints */
            if (strcmp($1, "pricePoints") == 0)
                if (strcmp($3, "amount") != 0)
                    yyerror("To \"pricePoints\" περιλαμβάνει μόνο το amount.");
            
            /* Έλεγχος περιεχομένων winningNumbers */
            // if (strcmp($1, "winningNumbers") == 0) {
            //     if ( strcmp(pair, "list") != 0 || (strcmp(content, "bonus") != 0) )
            //         yyerror("To winningNumbers περιλαμβάνει μόνο το list και το bonus.");
            // }

            /* Έλεγχος τύπου δεδομένων */
            if (strcmp($1, "status") == 0)
                yyerror("Το \"status\" δεν είναι τύπου object");
            else if (strcmp($1, "gameId") == 0)
                yyerror("Το \"gameId\" δεν είναι τύπου object");
            else if (strcmp($1, "drawId") == 0)
                yyerror("Το \"drawId\" δεν είναι τύπου object");
            else if (strcmp($1, "drawTime") == 0)
                yyerror("Το \"drawTime\" δεν είναι τύπου object");
            else if (strcmp($1, "drawBreak") == 0)
                yyerror("Το \"drawBreak\" δεν είναι τύπου object");
            else if (strcmp($1, "visualDraw") == 0)
                yyerror("Το \"visualDraw\" δεν είναι τύπου object");
            else if (strcmp($1, "list") == 0)
                yyerror("Το \"list\" δεν είναι τύπου object.");
            else if (strcmp($1, "bonus") == 0)
                yyerror("Το \"bonus\" δεν είναι τύπου object.");
            else if (strcmp($1, "amount") == 0)
                yyerror("Το \"amount\" δεν είναι τύπου object.");
            else if (strcmp($1, "id") == 0)
                yyerror("Το \"id\" δεν είναι τύπου object.");
            else if (strcmp($1, "divident") == 0)
                yyerror("Το \"divident\" δεν είναι τύπου object.");
            else if (strcmp($1, "winners") == 0)
                yyerror("Το \"winners\" δεν είναι τύπου object.");
            else if (strcmp($1, "distributed") == 0)
                yyerror("Το \"distributed\" δεν είναι τύπου object.");
            else if (strcmp($1, "jackpot") == 0)
                yyerror("Το \"jackpot\" δεν είναι τύπου object.");
            else if (strcmp($1, "fixed") == 0)
                yyerror("Το \"fixed\" δεν είναι τύπου object.");
            else if (strcmp($1, "categoryType") == 0)
                yyerror("Το \"categoryType\" δεν είναι τύπου object.");
            else if (strcmp($1, "gameType") == 0)
                yyerror("Το \"gameType\" δεν είναι τύπου object.");
            else if (strcmp($1, "minimumDistributed") == 0)
                yyerror("Το \"minimumDistributed\" δεν είναι τύπου object.");
            else if (strcmp($1, "columns") == 0)
                yyerror("Το \"columns\" δεν είναι τύπου object.");
            else if (strcmp($1, "wagers") == 0)
                yyerror("Το \"wagers\" δεν είναι τύπου object.");
            else if (strcmp($1, "addOn") == 0)
                yyerror("Το \"addOn\" δεν είναι τύπου object.");
            
            /* Έλεγχος άκυρων στοιχείων */
            else if (!((strcmp($1, "last") == 0) || (strcmp($1, "winningNumbers") == 0) || (strcmp($1, "wagerStatistics") == 0)
                            || (strcmp($1, "active") == 0) || (strcmp($1, "pricePoints") == 0))) {
                yyerror("Δεν υπάρχει αυτό το object στοιχείο.");
            }

        }
        | string T_COLON table { $$ = $1; 
            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            if (strcmp($1, "bonus") == 0) {
                if (i != 12)
                    yyerror("Το \"bonus\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "list") == 0) {
                if (i != 13)
                    yyerror("Το \"list\" δεν ανήκει εδώ.");
            }
            else if (strcmp($1, "addOn") == 0) {
                if (i != 91 && i != 179)
                    yyerror("Το \"addOn\" δεν ανήκει εδώ.");
            }

            /* Έλεγχος τύπου στοιχείων */
            if (strcmp($1, "status") == 0)
                yyerror("Το \"status\" δεν είναι τύπου table");
            else if (strcmp($1, "gameId") == 0)
                yyerror("Το \"gameId\" δεν είναι τύπου table");
            else if (strcmp($1, "drawId") == 0)
                yyerror("Το \"drawId\" δεν είναι τύπου table");
            else if (strcmp($1, "drawTime") == 0)
                yyerror("Το \"drawTime\" δεν είναι τύπου table");
            else if (strcmp($1, "drawBreak") == 0)
                yyerror("Το \"drawBreak\" δεν είναι τύπου table");
            else if (strcmp($1, "visualDraw") == 0)
                yyerror("Το \"visualDraw\" δεν είναι τύπου table");
            else if (strcmp($1, "pricePoints") == 0)
                yyerror("Το \"pricePoints\" δεν είναι τύπου table.");
            else if (strcmp($1, "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου table.");
            else if (strcmp($1, "wagerStatistics") == 0)
                yyerror("Το \"wagerStatistics\" δεν είναι τύπου table.");
            else if (strcmp($1, "amount") == 0)
                yyerror("Το \"amount\" δεν είναι τύπου table.");
            else if (strcmp($1, "id") == 0)
                yyerror("Το \"id\" δεν είναι τύπου table.");
            else if (strcmp($1, "divident") == 0)
                yyerror("Το \"divident\" δεν είναι τύπου table.");
            else if (strcmp($1, "winners") == 0)
                yyerror("Το \"winners\" δεν είναι τύπου table.");
            else if (strcmp($1, "distributed") == 0)
                yyerror("Το \"distributed\" δεν είναι τύπου table.");
            else if (strcmp($1, "jackpot") == 0)
                yyerror("Το \"jackpot\" δεν είναι τύπου table.");
            else if (strcmp($1, "fixed") == 0)
                yyerror("Το \"fixed\" δεν είναι τύπου table.");
            else if (strcmp($1, "categoryType") == 0)
                yyerror("Το \"categoryType\" δεν είναι τύπου table.");
            else if (strcmp($1, "gameType") == 0)
                yyerror("Το \"gameType\" δεν είναι τύπου table.");
            else if (strcmp($1, "minimumDistributed") == 0)
                yyerror("Το \"minimumDistributed\" δεν είναι τύπου table.");
            else if (strcmp($1, "columns") == 0)
                yyerror("Το \"columns\" δεν είναι τύπου table.");
            else if (strcmp($1, "wagers") == 0)
                yyerror("Το \"wagers\" δεν είναι τύπου table.");
            
            /* Έλεγχος άκυρων στοιχείων */
            else if (!((strcmp($1, "list") == 0) || (strcmp($1, "bonus") == 0) || (strcmp($1, "prizeCategories") == 0) || (strcmp($1, "addOn") == 0)))
                yyerror("Δεν υπάρχει αυτό το table στοιχείο.");
        }
        ;

table   : T_LBRACKET T_RBRACKET
        | T_LBRACKET integers T_RBRACKET
        | T_LBRACKET objects T_RBRACKET
        ;

objects : object    {$$ = $1;}
        | object T_COMMA objects    {$$ = $1;}
        ;

integers: T_INT {
            if ($1 < 1 || $1 > 45)
                yyerror("Κάποιο στοιχείο του \"list\" δεν ανήκει στο [1,45] ");
        }
        | T_INT T_COMMA integers {
            if ($1 < 1 || $1 > 45)
                yyerror("Κάποιο στοιχείο του \"list\" δεν ανήκει στο [1,45] ");

            if (list_counter == 4)
                yyerror("Το \"list\" περιέχει παραπάνω από 5 στοιχεία");
            list_counter++
        }
        ;

string  : T_QUOTE keyword_tokens T_QUOTE { $$ = $2;
            temp_val = $2;
            for (j = 0; j < i + 1; j++)
                if (strcmp(history[j], temp_val) != 0)
                    not_in_history = 1;
            if (not_in_history == 1) {
                strcpy(history[i++], temp_val);
                not_in_history = 0;
            }
            // printf("(i=%d)", i);
        }
        ;

keyword_tokens  : T_LAST {$$ = strdup(yytext);} | T_ACTIVE {$$ = strdup(yytext);}
                | T_GAME_ID {$$ = strdup(yytext);} | T_DRAW_ID {$$ = strdup(yytext);}| T_DRAW_TIME {$$ = strdup(yytext);}| T_STATUS {$$ = strdup(yytext);}
                | T_DRAW_BREAK {$$ = strdup(yytext);} | T_VISUAL_DRAW {$$ = strdup(yytext);} | T_PRICE_POINTS {$$ = strdup(yytext);}
                | T_WINNING_NUMBERS {$$ = strdup(yytext);} | T_PRIZE_CATEGORIES {$$ = strdup(yytext);}
                | T_WAGER_STATISTICS {$$ = strdup(yytext);}
                | T_AMOUNT {$$ = strdup(yytext);}| T_LIST {$$ = strdup(yytext);}| T_BONUS {$$ = strdup(yytext);}| T_ID{$$ = strdup(yytext);}
                | T_DIVIDENT {$$ = strdup(yytext);}| T_WINNERS {$$ = strdup(yytext);}| T_DISTRIBUTED {$$ = strdup(yytext);}| T_JACKPOT {$$ = strdup(yytext);}| T_FIXED{$$ = strdup(yytext);}
                | T_CATEGORY_TYPE {$$ = strdup(yytext);}| T_GAME_TYPE {$$ = strdup(yytext);}| T_MINIMUM_DISTRIBUTED{$$ = strdup(yytext);} | T_COLUMNS {$$ = strdup(yytext);}| T_WAGERS {$$ = strdup(yytext);}| T_ADD_ON {$$ = strdup(yytext);} | T_WORD {$$ = strdup(yytext);}
                ;


%%
/* ========[ C ]======== */

int main(int argc, char **argv) {
    for (j = 0; j < HISTORY_SIZE; j++)
        history[j] = (char*)calloc(HISTORY_SIZE, sizeof(char));

    /* What's the input? */
    ++argv; --argc;
    if (argc > 0) {
        printf("Input from %s:\n", argv[0]);
        yyin = fopen(argv[0], "r");
    } else yyin = stdin;

    do {
        yyparse();        
    } while (!feof(yyin));
    printf("\n");
    return 0;
}
 
void yyerror(char *s) {
    fprintf(stderr, "==[LINE %d: %s]==\n", yylineno/2+1, s);
}
