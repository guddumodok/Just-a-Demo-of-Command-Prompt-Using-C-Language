
#include"vistac.h"
char loc[500000];
void cmd();
int main()
{
	
puts("Welcome to New CMD Developed by RICIS Hostel Team \n Enter Location to Work on Hit enter to work in default");
gets(loc);

cmd();



    return 0;
}
void cmd(){
	char c[5000];
	puts("\n ......................................................................................................");
	gets(c);

if(strcmp(c,"createfile")==0){
	if(createfile(loc)==1){
		puts("File Created");
	}else{
		puts("Created Failed");
	}
cmd();
}else if(strcmp(c,"exit")==0){
	puts("You are Exiting.......");
	exit(0);
cmd();
}else if(strcmp(c,"clear")==0){
	puts("This function is not start now");
cmd();
}else if(strcmp(c,"reload")==0){
	puts("You are Reloading");
main();
}else if(strcmp(c,"printlocation")==0){
	puts(loc);
cmd();
}else{
	printf("%s is not a external or Internal Command",c);
	cmd();
}


}
