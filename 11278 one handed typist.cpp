#include <stdio.h>
#include <string.h>

main()
{
    char arr[1003];
    int l,loop;

    while(gets(arr)){

        l=strlen(arr);

        for(loop=0;loop<l;loop++){
            switch(arr[loop])
            {
                case '4':
                    printf("q");
                    break;

                case '5':
                    printf("j");
                    break;

                case '6':
                    printf("l");
                    break;

                case '7':
                    printf("m");
                    break;

                case '8':
                    printf("f");
                    break;

                case '9':
                    printf("p");
                    break;

                case '0':
                    printf("/");
                    break;

                case '-':
                    printf("[");
                    break;
                case '=':
                    printf("]");
                    break;

                case 'q':
                    printf("4");
                    break;

                case 'w':
                    printf("5");
                    break;

                case 'e':
                    printf("6");
                    break;

                case 'r':
                    printf(".");
                    break;

                case 't':
                    printf("o");
                    break;

                case 'i':
                    printf("u");
                    break;

                case 'y':
                    printf("r");
                    break;

                case 'u':
                    printf("s");
                    break;

                case 'o':
                    printf("y");
                    break;

                case 'p':
                    printf("b");
                    break;

                case '[':
                    printf(";");
                    break;

                case ']':
                    printf("'");
                    break;


                case 'a':
                    printf("7");
                    break;

                case 's':
                    printf("8");
                    break;

                case 'd':
                    printf("9");
                    break;

                case 'f':
                    printf("a");
                    break;

                case 'g':
                    printf("e");
                    break;

                case 'j':
                    printf("t");
                    break;

                case 'k':
                    printf("d");
                    break;

                case 'l':
                    printf("c");
                    break;

                case ';':
                    printf("k");
                    break;

                case '\'':
                    printf("-");
                    break;

                case 'z':
                    printf("0");
                    break;

                case 'x':
                    printf("z");
                    break;

                case 'c':
                    printf("x");
                    break;

                case 'v':
                    printf(",");
                    break;

                case 'b':
                    printf("i");
                    break;

                case 'm':
                    printf("w");
                    break;

                case ',':
                    printf("v");
                    break;


                case '.':
                    printf("g");
                    break;

                case '/':
                    printf("'");
                    break;



                case '$':
                    printf("Q");
                    break;

                case '%':
                    printf("J");
                    break;

                case '^':
                    printf("L");
                    break;

                case '&':
                    printf("M");
                    break;

                case '*':
                    printf("F");
                    break;

                case '(':
                    printf("P");
                    break;

                case ')':
                    printf("?");
                    break;

                case '_':
                    printf("{");
                    break;
                case '+':
                    printf("}");
                    break;

                case 'Q':
                    printf("$");
                    break;

                case 'W':
                    printf("%");
                    break;

                case 'E':
                    printf("^");
                    break;

                case 'R':
                    printf(">");
                    break;

                case 'T':
                    printf("O");
                    break;

                case 'I':
                    printf("U");
                    break;

                case 'Y':
                    printf("R");
                    break;

                case 'U':
                    printf("S");
                    break;

                case 'O':
                    printf("Y");
                    break;

                case 'P':
                    printf("B");
                    break;

                case '{':
                    printf(":");
                    break;

                case '}':
                    printf("+");
                    break;


                case 'A':
                    printf("&");
                    break;

                case 'S':
                    printf("*");
                    break;

                case 'D':
                    printf("(");
                    break;

                case 'F':
                    printf("A");
                    break;

                case 'G':
                    printf("E");
                    break;

                case 'J':
                    printf("T");
                    break;

                case 'K':
                    printf("D");
                    break;

                case 'L':
                    printf("C");
                    break;

                case ':':
                    printf("K");
                    break;

                case '"':
                    printf("-");
                    break;

                case 'Z':
                    printf(")");
                    break;

                case 'X':
                    printf("Z");
                    break;

                case 'C':
                    printf("X");
                    break;

                case 'V':
                    printf("<");
                    break;

                case 'B':
                    printf("I");
                    break;

                case 'M':
                    printf("W");
                    break;

                case '<':
                    printf("V");
                    break;


                case '>':
                    printf("G");
                    break;

                case '?':
                    printf("\"");
                    break;
                case ' ':
                    printf(" ");
                    break;

                default:
                    printf("%c",arr[loop]);
                    break;
            }

        }
        printf("\n");
    }
}


