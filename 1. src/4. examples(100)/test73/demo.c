/*
* 项目名称： 一个C语言的用例
* 项目功能： 反向输出一个链表
* 项目时间： 2021-11-14
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
# include<stdlib.h>
// ===================== 声明全局变量 ===============================
// 声明链表结构体(单链表)
typedef struct LNode
{
    int          data;
    struct LNode *next;
}LNode,*Linklist;

// ===================== 函数声明 ===============================
Linklist Linklist_create(int n);
int printf_linklist(Linklist root);
// ================================================================
// 函数名称：main
// 函数功能：反向输出一个链表
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf 
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
// 函数名称：Linklist_create
// 函数功能：创建有n个节点的链表
// 输入参数：n：链表节点数量
// 输出参数：Linklist：链表根节点指针
// 全局变量：无
// 调用模块：printf scanf
// ================================================================
Linklist Linklist_create(int n)
{
	Linklist root, new, current;

	// 为根指针分配内存
	root = (LNode* )malloc(sizeof(LNode));
	if(root == NULL)
	{
		return 0;
	}

	current = root;// 设置当前节点为根节点

	for (size_t i = 1; i <=  n; i++)
	{
		new = (LNode *)malloc(sizeof(LNode));
		printf("please input one int number\n");
		scanf("%d", &(new->data)); // 输入链表中的整型变量
		new->next = NULL;// 每次插入地址放在链表末尾
		current->next = new;
		current = new;// 保证current地址为当前节点的地址
	}
	return root;	
}
// ================================================================
// 函数名称：printf_linklist
// 函数功能：递归逆序打印链表（该链表不能有0）
// 输入参数：链表根节点指针
// 输出参数：链表节点数据
// 全局变量：无
// 调用模块：printf printf_linklist
// ================================================================
int printf_linklist(Linklist root)
{
	Linklist current = root;
	int i32Return = 0x1;

	if(current->next == NULL)// 是否是链表末尾节点
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