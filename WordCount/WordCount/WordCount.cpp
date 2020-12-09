#include <stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int i,cnt;
	char ch;
	char filename[80];
	FILE *fp;
	fp=fopen(argv[2],"r");
	cnt=0;
	if(strcmp(argv[1],"-c")==0||strcmp(argv[1],"-C")==0)
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			cnt++;
		}
		printf("×Ö·ûÊý£º%d\n",--cnt);
	}
	else if(strcmp(argv[1],"-w")==0||strcmp(argv[1],"-W")==0)
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			if(ch==' '|| ch==',')
			{
				cnt++;
			}
		}
		cnt=cnt+1;
		printf("µ¥´ÊÊý£º%d\n",cnt);
	}
}