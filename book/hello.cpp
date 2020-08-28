#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *fp1, *fp2;
    fp1 = fopen("hello.cpp", "r");
    fp2 = fopen("./FIle/new_hello.cpp", "w");
    char ch, ch1, ch2;
    while (!feof(fp1))
    {
        ch = fgetc(fp1); /*获取hello.cpp的每一个字符*/
        if (ch != EOF)
        {
            if (ch == '/')
            {
                if ((ch1 = fgetc(fp1)) == '*')
                {
                    while ((ch = fgetc(fp1)) != '*' && (ch1 = fgetc(fp1) != '/'))
                    {
                        fseek(fp1, -sizeof(ch1), 1);
                    }
                }
                else if (ch1 == '/')
                {
                    ch = '\0';
                    for (; ch1 != '\n'; ch1 = fgetc(fp1))
                        ch1 = '\0';
                }
            }else  fputc(ch, fp2);
        }
    }
    fclose(fp1);    //关闭文件
    fclose(fp2);

        return 0;
    }