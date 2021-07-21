#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int size = 5;
	char s[size][2000], temp[2000];
	for(int i=0;i<size;i++)
	{
		gets(s[i]);
		fflush(stdin); //Clear cache	
	}  
  	for(int i=0;i<size-1;i++)
  	{
  		for(int j=i+1;j<size;j++)
		{
			if(strcmp(s[i],s[j]) > 0)
			{
				strcpy(temp,s[i]); // temp = s[i];
				strcpy(s[i],s[j]); //s[i] = s[j];
				strcpy(s[j],temp); //s[j] = temp;
			}
		}	
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i=0;i<size;i++)
	{
		printf("%s ",s[i]);
	}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
