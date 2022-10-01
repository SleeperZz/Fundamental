#include <stdio.h>
#include<string.h>



int main()
{
	char ch[30];
    printf("Enter anythings you want: ");
    scanf("%s",&ch);
    int n = strlen(ch);
    int i;
    for(i=0;i<n;++i){
	if (ch[i] >= 'A' && ch[i] <= 'Z')
		printf("%c",ch[i]);
    }    

	return 0;
}
