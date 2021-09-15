void show_table()
{
	system("cls");
	int i,j,sel;

	printf("\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|               欢迎来到显示餐桌状态功能               |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t以下编号餐桌处于工作状态：\n");
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
			printf("\t\t\t状态：");
			if(tables[i].state==1)
			{
				printf("未支付\n");
			}
			printf("\t\t\t----------------------------------------------------------\n");
			printf("\n");
		}

	}

	printf("\t\t\t");
	system("pause");
}
