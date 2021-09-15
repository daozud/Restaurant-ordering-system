void modify_table()
{
	system("cls");
	int i,j,sel,k;
	printf("\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|               欢迎来到修改餐桌状态功能               |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t以下编号餐桌暂未支付：\n");
	for(i=0; i<N; i++)
	{
		if(tables[i].state==1)
		{
			printf("\t\t\t----------------------------------------------------------\n");
			printf("\t\t\t%d号桌：\n",i+1);
			printf("\t\t\t用餐人数：%d人\t点菜数量：%d道\n",tables[i].meal_number,tables[i].dish_number);
			printf("\t\t\t菜单：");
			for(j=0; j<tables[i].dish_number; j++)
			{
				printf("%s ",table_dishes[i][j].dish_name);
			}
			printf("\n");
			printf("\t\t\t一共需支付：%.2lf元\n",tables[i].table_price);
			printf("\t\t\t----------------------------------------------------------\n");
			printf("\n");
		}

	}
	while(1)
	{
		printf("\t\t\t请继续选择您的操作:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 进行支付           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 返回上一级菜单     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t请输入您的选择【1-2】：");
		scanf("%d",&sel);
		while(sel<1 || sel>2)
		{
			printf("\t\t\t输入错误，请重新输入您的选择【1-2】:");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			printf("\t\t\t请输入需要进行支付的餐桌号：");
			scanf("%d",&k);
			if(tables[k-1].state==1)
			{
				tables[k-1]=ttt;
				printf("\t\t\t支付成功！\n");
				filesave();
			}
			else
			{
				printf("\t\t\t该餐桌处于空闲状态，请确认是否输入正确\n");
			}
		}

		else if(sel==2)
		{
			filesave();
			admin_menu();
		}
	}
	printf("\t\t\t");
	system("pause");
}
