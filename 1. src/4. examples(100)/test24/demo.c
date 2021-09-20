/*
* 项目名称： 一个C语言的用例
* 项目功能： 计算前20项分数的和
* 项目时间： 2021-09-20
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===============================
# include<stdio.h>
// =================================================================
// 函数名称：main
// 函数功能：计算前20项分数的和
// 输入参数：无
// 输出参数：无
// 全局变量：无
// 调用模块：printf
// =================================================================
int main(void)
{
	int i32Ret = -1;
	float b_i32Molecule = 2;// 分子
	float b_i32Denominator = 1;// 分母
	float b_i32SumNumber = 0;// 求和
	unsigned int b_i32MoleculeOld = 0x00;// 分子旧值
	unsigned int b_i32DenominatorOld = 0x00;// 分母旧值
	unsigned int b_i32Input = 0x00;// 求和次数
	unsigned int b_i32SumNumberCount = 0x00;// 求和计数

	printf("Please input one unsigned int number\n");
	i32Ret = scanf("%d", &b_i32Input);// 输入计算次数
	if(i32Ret < 0)
	{
		printf("scanf input failed \n");// 打印信息
	}
	// 循环计算
	for (b_i32SumNumberCount = 0; b_i32SumNumberCount < b_i32Input;  b_i32SumNumberCount++)
	{
		b_i32SumNumber += (b_i32Molecule/b_i32Denominator);// 求和
		b_i32MoleculeOld = b_i32Molecule;// 保存旧值
		b_i32DenominatorOld = b_i32Denominator;// 保存旧值
		b_i32Molecule = b_i32MoleculeOld + b_i32DenominatorOld;// 计算下一个分子
		b_i32Denominator = b_i32MoleculeOld;// 计算下一个分母
	}

	printf("Sum = %f \n", b_i32SumNumber);// 打印信息
	return 0;
}