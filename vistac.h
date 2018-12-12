#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
int createfile(char loc[]){
	char name[500000],content[500000];

    FILE * fPtr;
    puts("Enter File Name");
gets(name);
puts("Enter File Content");
gets(content);
strcat(loc,name);
    fPtr = fopen(loc, "w");


    if(fPtr == NULL)
    {
       return 0;
    }
    fputs(content, fPtr);
 fclose(fPtr);
   return 1;
}
void np(int a){

  printf("%d\n",a);

 }
void cp(char a){
printf("%c\n",a);

}
void p(char a[]){
printf("%s\n",a);


}
int count(char a[]){
int count,b=0;
for(count=0;a[count]!='\0';count++){
b=b+1;

}
return b;
}
int delete(char name[]){
	if(remove(name)){
		return 0;
	}else{
		return 1;
	}
}
int move(char loc[]){
	char oldname[5000000],newname[100];
	strcat(loc,oldname);
	if(rename (loc,newname)){
return 0;
	}else{
		return 1;
	}
}
