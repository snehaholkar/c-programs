#include<stdio.h>
main()
{
	FILE*fp;
	char c;
	printf("content of file before appending\n");
	fp=fopen("hii.c","r");
	   
	   while(!feof(fp))
	   {
	   	c=fgetc(fp);
	   	printf("%c",c);
	   }
	   fclose(fp);
	   
	   fp=fopen("hii.c","a");
	   if(fp==NULL)
	   {
	   	printf("file can not appended");
	   }
	   printf("\n enter string to append\n");
	   while(c!='.')
	   {
	   	c=getche();
		   fputc(c,fp);
	   }
	   fclose(fp);
	   
	   printf("content of file after appending\n");
	   fp=fopen("hii.c","r");
	   
	   while(!feof(fp))
	   {
	   	c=fgetc(fp);
	   	printf("%c",c);
	   }
	   fclose(fp);
}
