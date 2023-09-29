#include <iostream>
#include <cstring>
#include <cctype>
#define N 250
using namespace std;
int main()
{
    char A[21], B[N];
    int i;
    bool b;
    cout<<"Escriba una palabra en mayusculas o un numero (de 20 caracteres o menos) o presiones enter para salir: ";
    do
    {
        i=0;
        b=true;
        cin.get(A,21);
        cin.ignore();
        while (i<strlen(A) and b==true)
        {
            if ((isalnum(A[i]))==false and A[i]!=46)
            {
                b=false;
            }
            else if (A[i]>='a' and A[i]<='z')
            {
                b=false;
            }
            else
            {
                i++;
            }
        }
        if (b==false)
        {
            cout<<endl<<"Error de ingreso, intente nuevamente o presiones enter para salir: ";
        }
    } while (b==false);
    i=0;
    while (i<strlen(A))
    {
        if (i!=0)
        {
            strcat(B," - ");
        }
        switch (A[i])
        {
        case 'A':
            strcat(B,"Alfa");
            break;
        
        case 'B':
            strcat(B,"Bravo");
            break;

        case 'C':
            strcat(B,"Charlie");
            break;

        case 'D':
            strcat(B,"Delta");
            break;

        case 'E':
            strcat(B,"Echo");
            break;

        case 'F':
            strcat(B,"Foxtrot");
            break;

        case 'G':
            strcat(B,"Golf");
            break;

        case 'H':
            strcat(B,"Hotel");
            break;

        case 'I':
            strcat(B,"India");
            break;

        case 'J':
            strcat(B,"Juliett");
            break;

        case 'K':
            strcat(B,"Kilo");
            break;

        case 'L':
            strcat(B,"Lima");
            break;

        case 'M':
            strcat(B,"Mike");
            break;

        case 'N':
            strcat(B,"November");
            break;

        case 'O':
            strcat(B,"Oscar");
            break;

        case 'P':
            strcat(B,"Papa");
            break;

        case 'Q':
            strcat(B,"Quebec");
            break;

        case 'R':
            strcat(B,"Romeo");
            break;

        case 'S':
            strcat(B,"Sierra");
            break;

        case 'T':
            strcat(B,"Tango");
            break;

        case 'U':
            strcat(B,"Uniform");
            break;

        case 'V':
            strcat(B,"Victor");
            break;

        case 'W':
            strcat(B,"Whiskey");
            break;

        case 'X':
            strcat(B,"X-Ray");
            break;

        case 'Y':
            strcat(B,"Yankee");
            break;

        case 'Z':
            strcat(B,"Zulu");
            break;

        case '1':
            if (A[i+1]!='0')
            {
                strcat(B,"One");
            }
            else if (A[i+2]=='0' and A[i+3]!='0')
            {
                strcat(B,"Hundred");
                i+=2;
            }
            else
            {
                strcat(B,"Thousand");
                i+=3;
            }
            break;

        case '2':
            strcat(B,"Two");
            break;

        case '3':
            strcat(B,"Three");
            break;

        case '4':
            strcat(B,"Four");
            break;

        case '5':
            strcat(B,"Five");
            break;

        case '6':
            strcat(B,"Six");
            break;

        case '7':
            strcat(B,"Seven");
            break;

        case '8':
            strcat(B,"Eight");
            break;

        case '9':
            strcat(B,"Nine");
            break;

        case '0':
            strcat(B,"Zero");
            break;

        case '.':
            strcat(B,"Decimal");
            break;

        default:
            cout<<"Xd??";
            break;
        }
        i++;
    }
    cout<<endl<<"Traduccion OTAN: "<<endl<<B;

    return 0;
}