void add_dish()
{
	system("cls");
	int i,sel;
	struct dish tem_dish;
	printf("\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                ��ӭ�������Ӳ�Ʒ����                  |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\n");
	for(i=0; i<H; i++)
	{
		if(strcmp(dishes[i].dish_name,"")==0)
		{
			printf("\t\t\t�����������ѡ�����Ĳ���:\n");
			printf("\t\t\t|------------------------|\n");
			printf("\t\t\t|   1 ���Ӳ�Ʒ           |\n");
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
				printf("\t\t\t�����Ʒ����:");
				getchar();
				gets(tem_dish.dish_name);
				printf("\t\t\t�����Ʒ�۸�:");
				scanf("%lf", &tem_dish.dish_price);
				printf("\t\t\t�����Ʒ����:");
				getchar();
				gets(tem_dish.dish_type);
				for (i = 0; i < H; i++)
				{
					if (strcmp(tem_dish.dish_name, dishes[i].dish_name) == 0)
					{
						printf("�ò�Ʒ�Ѵ���,�����ظ���ӣ�\n");
						flag = 1;
						break;
					}
				}
				if (flag == 0)
				{
					for (i = 0; i < H; i++)
					{
						if (strcmp(dishes[i].dish_name,"") == 0)
						{
							dishes[i]=tem_dish;
							printf("\t\t\t��ӳɹ���\n");
							break;
						}
					}
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
}
