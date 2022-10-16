/*
* ��Ŀ���ƣ� һ��C���Ե�����
* ��Ŀ���ܣ� �������һ������
* ��Ŀʱ�䣺 2021-11-14
* ��Ŀ���ߣ� ZZD
*/
// ===================== ϵͳͷ�ļ� ===============================
# include<stdio.h>
# include<stdlib.h>
// ===================== ����ȫ�ֱ��� ===============================
// ��������ṹ��(������)
typedef struct LNode
{
    int          data;
    struct LNode *next;
}LNode,*Linklist;

// ===================== �������� ===============================
Linklist Linklist_create(int n);
int printf_linklist(Linklist root);
// ================================================================
// �������ƣ�main
// �������ܣ��������һ������
// �����������
// �����������
// ȫ�ֱ�������
// ����ģ�飺printf 
// ================================================================
int main(void)
{
	unsigned short u16Count = 0;
	Linklist root = NULL;
	printf("please input count \n");
	scanf("%d",&u16Count);
	root = Linklist_create(u16Count);
	printf_linklist(root);
	return 0;
}
// ================================================================
// �������ƣ�Linklist_create
// �������ܣ�������n���ڵ������
// ���������n������ڵ�����
// ���������Linklist��������ڵ�ָ��
// ȫ�ֱ�������
// ����ģ�飺printf scanf
// ================================================================
Linklist Linklist_create(int n)
{
	Linklist root, new, current;

	// Ϊ��ָ������ڴ�
	root = (LNode* )malloc(sizeof(LNode));
	if(root == NULL)
	{
		return 0;
	}

	current = root;// ���õ�ǰ�ڵ�Ϊ���ڵ�

	for (size_t i = 1; i <=  n; i++)
	{
		new = (LNode *)malloc(sizeof(LNode));
		printf("please input one int number\n");
		scanf("%d", &(new->data)); // ���������е����ͱ���
		new->next = NULL;// ÿ�β����ַ��������ĩβ
		current->next = new;
		current = new;// ��֤current��ַΪ��ǰ�ڵ�ĵ�ַ
	}
	return root;	
}
// ================================================================
// �������ƣ�printf_linklist
// �������ܣ��ݹ������ӡ��������������0��
// ���������������ڵ�ָ��
// �������������ڵ�����
// ȫ�ֱ�������
// ����ģ�飺printf printf_linklist
// ================================================================
int printf_linklist(Linklist root)
{
	Linklist current = root;
	int i32Return = 0x1;

	if(current->next == NULL)// �Ƿ�������ĩβ�ڵ�
	{
		printf("%d ", current->data);
		return 0;
	}
	else
	{
		i32Return = printf_linklist(current->next);
		if (i32Return != 0)
		{
			printf("%d ", i32Return);
		}
	}	
	return current->data;
}