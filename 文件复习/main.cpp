#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string>

//复习文件操作：打开、关闭、读取、关闭
//打开文件 ,fopen存在stdio头文件里面

/*
"r"	打开一个用于读取的文件。该文件必须存在。
"w"	创建一个用于写入的空文件。如果文件名称与已存在的文件相同，则会删除已有文件的内容，文件被视为一个新的空文件。
"a"	追加到一个文件。写操作向文件末尾追加数据。如果文件不存在，则创建文件。
"r+"打开一个用于更新的文件，可读取也可写入。该文件必须存在。
"w+"创建一个用于读写的空文件。
"a+"打开一个用于读取和追加的文件。
*/
int main() {
	
	FILE* fp = fopen("D:\\test.txt","w");
	//若成功打开，则返回文件指针，打不开则返回NULL
	//if (fp == NULL) {
	//	printf("打开文件失败\n");
	//}
	//else
	//{
	//	printf("成功\n");
	//}
	


	//读文件操作 
	//char ch = fgetc(fp);
	//读取的内容返回成一个字符
	//printf("%c\n", ch);
	//ch = fgetc(fp);
	//printf("%c\n", ch);
	//若再读一次则会输出下一个字符，因为还没有执行到fclose的时候
	//文件指针会继续往后移动，从而输出对应

	//以上读操作是逐个字符读取 即fgetc函数返回值是一个字符，若想一次性读取完 读完后指针会返回EOF
	//EOF是一个宏 即要判断是否将文档读完可以用EOF判断
	//char ch;
	//while ((ch=fgetc(fp)) != EOF) {
	//	printf("%c",ch);
	//}
	//读取一行
	//char str[200];
	//fgets(str, 200, fp);
	//printf("%s\n", str);*/
	//同理fgets和fgetc一样，读完也会将文件指针后移 

	//按行循环读取 
	//while (fgets(str, 200, fp) != NULL) {
	//	printf("%s", str);
	//}
	//fgets的函数返回值就是str，若读不到了就返回NULL
	/*char* p = fgets(str, 200, fp);
	printf("%s", p);
	printf("%s", str);*/
	//通过上面两行可以发现 输出结果一样，也就是说fgets函数返回的内容就是读取的一行

	//fread函数 返回实际读取的大小
	//int n = fread(str, 1, 10, fp);//按一个字节的大小读10份 就是10个字节
	//str[n] = '\0';//结束符 
	//printf("%s", str);


	//写文件操作
	//写入一个字符 w清空写
	/*fputc('A', fp);*/

	//写入字符串 fputs
	const char* str = "asaslfkjlkjkjgiuolfaslfkjlkjkjgiuokaslfkjlkjkjgiuojlkjkjaslfkjlkjkjgiuogiuo" ;
	//fputs(str, fp);
	//写入随意大小
	//fwrite(str, 1, 10, fp);
	fwrite(str, 1, strlen(str), fp);




	//关闭文件
	fclose(fp);
}
