void show_dish()
{
	system("cls");
	int i;
	printf("\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                ��ӭ������ʾ�˵�����                  |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\n");
	printf("\t\t\t��ǰ�˵�����:\n");
	printf("\n");

	printf("\t\t\t|----------------------------------------------------|\n");
	printf("\t\t\t| %-10s","���");
	printf("%-18s","��Ʒ����");
	printf("%-12s","�۸�");
	printf("%-10s |","��Ʒ����");
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
