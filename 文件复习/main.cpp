#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string>

//��ϰ�ļ��������򿪡��رա���ȡ���ر�
//���ļ� ,fopen����stdioͷ�ļ�����

/*
"r"	��һ�����ڶ�ȡ���ļ������ļ�������ڡ�
"w"	����һ������д��Ŀ��ļ�������ļ��������Ѵ��ڵ��ļ���ͬ�����ɾ�������ļ������ݣ��ļ�����Ϊһ���µĿ��ļ���
"a"	׷�ӵ�һ���ļ���д�������ļ�ĩβ׷�����ݡ�����ļ������ڣ��򴴽��ļ���
"r+"��һ�����ڸ��µ��ļ����ɶ�ȡҲ��д�롣���ļ�������ڡ�
"w+"����һ�����ڶ�д�Ŀ��ļ���
"a+"��һ�����ڶ�ȡ��׷�ӵ��ļ���
*/
int main() {
	
	FILE* fp = fopen("D:\\test.txt","w");
	//���ɹ��򿪣��򷵻��ļ�ָ�룬�򲻿��򷵻�NULL
	//if (fp == NULL) {
	//	printf("���ļ�ʧ��\n");
	//}
	//else
	//{
	//	printf("�ɹ�\n");
	//}
	


	//���ļ����� 
	//char ch = fgetc(fp);
	//��ȡ�����ݷ��س�һ���ַ�
	//printf("%c\n", ch);
	//ch = fgetc(fp);
	//printf("%c\n", ch);
	//���ٶ�һ����������һ���ַ�����Ϊ��û��ִ�е�fclose��ʱ��
	//�ļ�ָ�����������ƶ����Ӷ������Ӧ

	//���϶�����������ַ���ȡ ��fgetc��������ֵ��һ���ַ�������һ���Զ�ȡ�� �����ָ��᷵��EOF
	//EOF��һ���� ��Ҫ�ж��Ƿ��ĵ����������EOF�ж�
	//char ch;
	//while ((ch=fgetc(fp)) != EOF) {
	//	printf("%c",ch);
	//}
	//��ȡһ��
	//char str[200];
	//fgets(str, 200, fp);
	//printf("%s\n", str);*/
	//ͬ��fgets��fgetcһ��������Ҳ�Ὣ�ļ�ָ����� 

	//����ѭ����ȡ 
	//while (fgets(str, 200, fp) != NULL) {
	//	printf("%s", str);
	//}
	//fgets�ĺ�������ֵ����str�����������˾ͷ���NULL
	/*char* p = fgets(str, 200, fp);
	printf("%s", p);
	printf("%s", str);*/
	//ͨ���������п��Է��� ������һ����Ҳ����˵fgets�������ص����ݾ��Ƕ�ȡ��һ��

	//fread���� ����ʵ�ʶ�ȡ�Ĵ�С
	//int n = fread(str, 1, 10, fp);//��һ���ֽڵĴ�С��10�� ����10���ֽ�
	//str[n] = '\0';//������ 
	//printf("%s", str);


	//д�ļ�����
	//д��һ���ַ� w���д
	/*fputc('A', fp);*/

	//д���ַ��� fputs
	const char* str = "asaslfkjlkjkjgiuolfaslfkjlkjkjgiuokaslfkjlkjkjgiuojlkjkjaslfkjlkjkjgiuogiuo" ;
	//fputs(str, fp);
	//д�������С
	//fwrite(str, 1, 10, fp);
	fwrite(str, 1, strlen(str), fp);




	//�ر��ļ�
	fclose(fp);
}
