void customer_pay()
{
	system("cls");
	int i,j,sel,sell,k;
	printf("\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                     尊贵的上帝                       |\n");
	printf("\t\t\t|                 欢迎光临霍格沃茨餐厅！               |\n");
	printf("\t\t\t|———————————————————————————|\n");

	while(1)
	{
		printf("\t\t\t接下来请继续选择您的操作:\n");
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
			printf("\t\t\t请您输入需要进行支付的餐桌号：");
			scanf("%d",&k);

			if(tables[k-1].state==1)
			{
				printf("\t\t\t----------------------------------------------------------\n");
				printf("\t\t\t%d号桌：\n",k);
				printf("\t\t\t用餐人数：%d人\t点菜数量：%d道\n",tables[k-1].meal_number,tables[k-1].dish_number);
				printf("\t\t\t菜单：");
				for(j=0; j<tables[k-1].dish_number; j++)
				{
					printf("%s ",table_dishes[k-1][j].dish_name);
				}
				printf("\n");
				printf("\t\t\t一共需支付：%.2lf元\n",tables[k-1].table_price);
				printf("\t\t\t----------------------------------------------------------\n");
				printf("\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t|   1 确认支付           |\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t|   2 返回上一级菜单     |\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t请输入您的选择【1-2】：");
				scanf("%d",&sell);
				while(sell<1 || sell>2)
				{
					printf("\t\t\t输入错误，请重新输入您的选择【1-2】:");
					scanf("%d",&sell);
				}
				if(sell==1)
				{
					tables[k-1]=ttt;
					printf("\t\t\t支付成功！\n");
					filesave();
				}
				if(sell==2)
				{
					menu();
				}

			}
			else
			{
				printf("\t\t\t该餐桌处于空闲状态，请确认是否输入正确\n");
			}
		}

		else if(sel==2)
		{
			filesave();
			menu();
		}
	}
	printf("\t\t\t");
	system("pause");
}
