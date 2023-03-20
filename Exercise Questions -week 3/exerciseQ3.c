#include<stdio.h>
#include<string.h>
void sortString(char []);
int main()
{
	char str[50];
      printf("Enter the string : ");
	scanf("%s",str);
	int i=0,j=0;
	int flag=0,key;
	char copy[strlen(str)];
	while(j<strlen(str))
	{
	    i=0;
	    while((str[j] >= 97 && str[j] <= 122 ) | ( str[j] >= 65 && str[j] <= 90) && str[j] != '\0')
	    {
	        copy[i]=str[j];
	        copy[i+1]='\0';
		    i++;
		    ++j;
		    key=1;
		}
		if(key==1)
	    {
	        sortString(copy);   
	    }
	    i=0;
	    while((str[j] >= 48 && str[j] <= 57 ) && str[j] != '\0')
	    {
	        copy[i]=str[j];
	        copy[i+1]='\0';
		    i++;
		    ++j;
		    key=1;
	    }
	    if(key==1)
	    {
	        sortString(copy);	        
	    } 
	}	
	return 0;
}

void sortString(char sub_string[])
{
	int k=strlen(sub_string)-1;
	char temp;
	int i=0;
    int flag = 0;
	while(i<k)
	{
	for(int j=0;j<k;j++)
	{
	 if(sub_string[j]>sub_string[j+1])
	  {
		temp=sub_string[j];
		sub_string[j]=sub_string[j+1];
		sub_string[j+1]=temp;
	  }
	}
	i++;
	}
	printf("%s",sub_string);
}

