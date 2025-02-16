%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include "myJSONbison.tab.c" //σύνδεση bison
    extern int yylineno;
%}

%option case-sensitive
%option yylineno
%option noyywrap

INT                 ([0-9])+
FLOAT               {INT}+\.{INT}+
LETTER              [a-zA-Z]
WORD                ({LETTER}|{INT})+

QUOTE               ["]
COMMA               ","
COLON               ":"
BRACKET_LEFT        "["
BRACKET_RIGHT       "]"
BRACE_LEFT          "{"
BRACE_RIGHT         "}"
SPACE               [ \t]

LAST                "last"
GAME_ID             "gameId"
DRAW_ID             "drawId"
DRAW_TIME           "drawTime"
STATUS              "status"
DRAW_BREAK          "drawBreak"
VISUAL_DRAW         "visualDraw"
PRICE_POINTS        "pricePoints"
AMOUNT              "amount"
WINNING_NUMBERS     "winningNumbers"
LIST                "list"
BONUS               "bonus"
PRIZE_CATEGORIES    "prizeCategories"
ID                  "id"
DIVIDENT            "divident"
WINNERS             "winners"
DISTRIBUTED         "distributed"
JACKPOT             "jackpot"
FIXED               "fixed"
CATEGORY_TYPE       "categoryType"
GAME_TYPE           "gameType"
MINIMUM_DISTRIBUTED "minimumDistributed"
WAGER_STATISTICS    "wagerStatistics"
COLUMNS             "columns"
WAGERS              "wagers"
ADD_ON              "addOn"
ACTIVE              "active"

%%

{QUOTE}                      {printf("%s", yytext); return T_QUOTE;}
{COLON}                      {printf("%s", yytext); return T_COLON;}
{COMMA}                      {printf("%s", yytext); return T_COMMA;}
{BRACKET_LEFT}               {printf("%s", yytext); return T_LBRACKET;}
{BRACKET_RIGHT}              {printf("%s", yytext); return T_RBRACKET;}
{BRACE_LEFT}                 {printf("%s", yytext); return T_LBRACE;}
{BRACE_RIGHT}                {printf("%s", yytext); return T_RBRACE;}

{INT}                     {printf("%s", yytext); yylval.intval = atoi(yytext); return T_INT;}
{FLOAT}                   {printf("%s", yytext); yylval.flval = atof(yytext); return T_FLOAT;}

{LAST}                    {printf("%s", yytext); yylval.strval = strdup(yytext); return T_LAST;}
{ACTIVE}                  {printf("%s", yytext); return T_ACTIVE;}
{GAME_ID}                 {printf("%s", yytext); return T_GAME_ID;}
{DRAW_ID}                 {printf("%s", yytext); return T_DRAW_ID;}
{DRAW_TIME}               {printf("%s", yytext); return T_DRAW_TIME;}
{STATUS}                  {printf("%s", yytext); return T_STATUS;}
{DRAW_BREAK}              {printf("%s", yytext); return T_DRAW_BREAK;}
{VISUAL_DRAW}             {printf("%s", yytext); return T_VISUAL_DRAW;}
{PRICE_POINTS}            {printf("%s", yytext); return T_PRICE_POINTS;}
    {AMOUNT}              {printf("%s", yytext); return T_AMOUNT;}
{WINNING_NUMBERS}         {printf("%s", yytext); return T_WINNING_NUMBERS;}
    {LIST}                {printf("%s", yytext); return T_LIST;}
    {BONUS}               {printf("%s", yytext); return T_BONUS;}
{PRIZE_CATEGORIES}        {printf("%s", yytext); return T_PRIZE_CATEGORIES;}
    {ID}                  {printf("%s", yytext); return T_ID;}
    {DIVIDENT}            {printf("%s", yytext); return T_DIVIDENT;}
    {WINNERS}             {printf("%s", yytext); return T_WINNERS;}
    {DISTRIBUTED}         {printf("%s", yytext); return T_DISTRIBUTED;}
    {JACKPOT}             {printf("%s", yytext); return T_JACKPOT;}
    {FIXED}               {printf("%s", yytext); return T_FIXED;}
    {CATEGORY_TYPE}       {printf("%s", yytext); return T_CATEGORY_TYPE;}
    {GAME_TYPE}           {printf("%s", yytext); return T_GAME_TYPE;}
    {MINIMUM_DISTRIBUTED} {printf("%s", yytext); return T_MINIMUM_DISTRIBUTED;}
{WAGER_STATISTICS}        {printf("%s", yytext); return T_WAGER_STATISTICS;}
    {COLUMNS}             {printf("%s", yytext); return T_COLUMNS;}
    {WAGERS}              {printf("%s", yytext); return T_WAGERS;}
    {ADD_ON}              {printf("%s", yytext); return T_ADD_ON;}

{WORD}                    {printf("%s", yytext); return T_WORD;}

\n                       {printf("\n"); yylineno++;}
{SPACE}                    {printf("%s", yytext);}
.                          {printf("");}

%%
