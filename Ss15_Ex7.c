#include <stdio.h>

int main(){
	char str[100];
	printf("Moi ban nhap 1 chuoi bat ki: ");
	fgets(str, 100, stdin);
	printf("%s", str);
	
	int size = strlen(str);
	int countText = 0;
	int countNum = 0;
	int countConlai = 0;
	
	for (int i = 0; i < size; i++){
		if(isalpha(str[i])){
		countText = countText + 1;
	}else if(isdigit(str[i])){
		countNum = countNum + 1;
	}else {
		countConlai += 1;
	}
	}
	printf("so ki tu chu cai la: %d\n", countText);
	printf("so ki tu chu so la: %d\n", countNum);
	printf("so ki tu dac biet la: %d\n", countConlai - 1);
		
	return 0;
}
