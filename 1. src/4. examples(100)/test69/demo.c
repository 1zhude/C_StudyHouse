/*
* ��Ŀ���ƣ� һ��C���Ե�����
* ��Ŀ���ܣ� �������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
* ��Ŀʱ�䣺 2021-10-08
* ��Ŀ���ߣ� ZZD
*/
// ===================== ϵͳͷ�ļ� ===============================
# include<stdio.h>
# include<stdlib.h>
# include<windows.h>
// ===================== �궨������ ===============================
// ��������ַ���
#define MS_DOS_OUTPUT_CP	437		// ����ʾ��չAscii��, ��������ʾ����! 
#define CHINESE_OUTPUT_CP	936		// ����ʾ����, ��������ʾ��չAscii��! 
// ================================================================
// �������ƣ�main
// �������ܣ��������������е������ھ�����С�ķ������
// �����������
// �����������
// ȫ�ֱ�������
// ����ģ�飺printf 
// ================================================================
int main(void)
{
	// �������
	unsigned short *p;// ������
	unsigned short PeopleNumber[50] = {0};// ������
	unsigned short InputPeopleNumber = 0x0;// �������Ȧ����
	unsigned short InputPeopleNumberCountA = 0x0;
   	unsigned short InputPeopleNumberCountB = 0x0;
   	unsigned short InputPeopleNumberCountreturn = 0x0;

    SetConsoleOutputCP(CHINESE_OUTPUT_CP);// �����ն˿������չASCII��

	// ������������
	printf("������һȦ�˵�������С��50��: \n");
	scanf("%d", &InputPeopleNumber);
	fflush(stdin);// ���������

	p = PeopleNumber;// ��ָ�븳��ʼ��ַ
	// ����Ȧ�˽��б��
	for(ssize_t i = 0; i < InputPeopleNumber; i++)
	{
		*(p+i) = i + 1;
	}

	// ѭ������ʣ��ı��
	while (InputPeopleNumberCountreturn < (InputPeopleNumber - 1))
	// ���˳�����ΪInputPeopleNumber - 2ʱֹͣѭ����ʣ�����һ��
	{
		if(*(p+InputPeopleNumberCountA) != 0)// �ж��������Ƿ�Ϊ0
		{
			InputPeopleNumberCountB ++;
		}
		if(InputPeopleNumberCountB == 3)// �жϱ���Ƿ�Ϊ3
		{
			InputPeopleNumberCountB = 0;
			*(p+InputPeopleNumberCountA) = 0;// �����Ϊ3���˱����Ϊ0
			InputPeopleNumberCountreturn++;// �˳�������1
		}	
		InputPeopleNumberCountA++;//ָ�����
		// ��������β
		if(InputPeopleNumberCountA == InputPeopleNumber)
		{
			InputPeopleNumberCountA = 0; // ���¿�ʼ
		}
	}
	// ��ӡ��Ϣ
	for(ssize_t i = 0; i < 50; i++)
	{	
		// ����Ƿ�Ϊ0
		if (PeopleNumber[i] != 0)
		{	
			printf("ʣ�µı����: %d\n", PeopleNumber[i]);		
		}
	}
	return 0;
}
