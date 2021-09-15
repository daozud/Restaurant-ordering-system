void show_dish()
{
	system("cls");
	int i;
	printf("\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                欢迎来到显示菜单功能                  |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\n");
	printf("\t\t\t当前菜单如下:\n");
	printf("\n");

	printf("\t\t\t|----------------------------------------------------|\n");
	printf("\t\t\t| %-10s","序号");
	printf("%-18s","菜品名称");
	printf("%-12s","价格");
	printf("%-10s |","菜品类型");
	printf("\n");
	printf("\t\t\t|----------------------------------------------------|\n");
	for(i=0; i<H; i++)
	{
		if(strcmp(dishes[i].dish_name,"")!=0)
		{
			printf("\t\t\t| %-10d",i+1);
			printf("%-18s",dishes[i].dish_name);
			printf("%-12.2lf",dishes[i].dish_price);
			printf("%-10s |",dishes[i].dish_type);
			printf("\n");
			printf("\t\t\t|----------------------------------------------------|\n");
		}
		else
			break;
	}
	printf("\t\t\t");
	system("pause");
}
