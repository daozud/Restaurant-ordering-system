void modify_dish()
{
	system("cls");
	int i,sel;
	struct dish tem_dish;
	printf("\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                ��ӭ�����޸Ĳ�Ʒ����                  |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\n");

	while(1)
	{
		printf("\t\t\t�����������ѡ�����Ĳ���:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 �޸Ĳ�Ʒ           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 ������һ���˵�     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t����������ѡ��1-2����");
		scanf("%d",&sel);

		while(sel<1 || sel>2)
		{
			printf("\t\t\t���������������������ѡ��1-2��:");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			int flag = 0;
			printf("\t\t\t���������޸ĵĲ�Ʒ����:");
			getchar();
			gets(tem_dish.dish_name);
			for(i=0; i<H; i++)
			{
				if (strcmp(tem_dish.dish_name, dishes[i].dish_name) == 0)
				{
					flag=1;
					printf("\t\t\t�����޸ĺ�ĵĲ�Ʒ����:");
					gets(tem_dish.dish_name);
					printf("\t\t\t�����޸ĺ�Ĳ�Ʒ�۸�:");
					scanf("%lf", &tem_dish.dish_price);
					printf("\t\t\t�����޸ĺ�Ĳ�Ʒ����:");
					getchar();
					gets(tem_dish.dish_type);
					dishes[i]=tem_dish;//��ֵ
					printf("\t\t\t�޸ĳɹ���\n");
					break;
				}
			}
			if(flag==0)
			{
				printf("\t\t\t��ǰ�˵�û�д��ֲ�Ʒ��\n");
			}
			filesave();
		}
		else if(sel==2)
		{
			filesave();
			admin_menu();
		}
	}
}
