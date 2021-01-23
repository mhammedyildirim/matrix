#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");
    char matris[7][6]= {{'A','G','L','S','Z','6'},{'B','Ð','M','Þ','0','7'},{'C','H','N','T','1','8'},{'Ç','I','O','U','2','9'},{'D','Ý','Ö','Ü','3','?'},{'E','J','P','V','4','!'},{'F','K','R','Y','5',' '}};
	
	
	char input[100];
	printf("Lütfen sadece büyük harflerden oluþan bir metin giriniz:\n");
	gets(input);
	int i;
	int z;
	int g;
	
	for(i = 0; i < strlen(input); i++) {
		char letter = input[i];
		
		for(z = 0; z < 7; z++) {
			for(g = 0; g < 6; g++) {
				if(letter == matris[z][g]){
					printf("%d",z + 1);
					printf("%d",g+ 1);
				}
			}	
		}
	}
	

    return 0;

}
