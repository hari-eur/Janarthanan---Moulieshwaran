#include<stdio.h>
#include<stdlib.h>
int main()
{
	char file[100];
	int opt;
    printf("Enter the option:\n 1 to Encrypt.\n 2 to Decrypt.\n 3 to quit.\n -->");
    scanf("%d",&opt);
	char ch,ch1,choice;
	switch(opt)
	{
	    do{
		case 1:
			{	
			    printf("Enter the file name:");
            	scanf("%s",file);
            	FILE *ftp=fopen(file,"r+");
				FILE *ftp1=fopen("encrypt.txt","w+");
				while((ch=fgetc(ftp))!=EOF)
        				{
						ch=ch+3;
				        fputc(ch,ftp1);
        				}
				fclose(ftp);
				fclose(ftp1);
				printf("Wnat to continue(y or n) :");
				scanf("%c",&choice);
				break;
			}
		case 2:
			{
			    printf("Enter the file name:");
            	scanf("%s",file);
				FILE *ftp1=fopen(file,"r");
				FILE *ftp2=fopen("decrypt.txt","w+");
				while((ch1=fgetc(ftp1))!=EOF)
					{
						ch1=ch1-3;
						fputc(ch1,ftp2);
					
					}
				fclose(ftp1);
				fclose(ftp2);
				printf("Wnat to continue(y or n) :");
				scanf("%c",&choice);
				break;
			}
		case 3:
			{
			    printf("Program ended");
				exit(1);
			}
	}while(choice=='y');
	}
	return 0;
}
