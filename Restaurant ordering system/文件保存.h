void filesave()
{
	FILE *fp;
	fp=fopen("admin.txt","w");
	if(fp==NULL)
	{
		printf("文件打开失败\n");
		exit(0);
	}
	fwrite(admins,sizeof(struct admin),M,fp);
	fclose(fp);

	FILE *fq;
	fq=fopen("dishes.txt","w");
	if(fq==NULL)
	{
		printf("文件打开失败\n");
		exit(0);
	}
	fwrite(dishes,sizeof(struct dish),H,fq);
	fclose(fq);

	FILE *fz;
	fz=fopen("tables.txt","w");
	if(fz==NULL)
	{
		printf("文件打开失败\n");
		exit(0);
	}
	fwrite(tables,sizeof(struct table),N,fz);
	fclose(fz);

	FILE *ft;
	ft=fopen("table_dishes.txt","w");
	if(ft==NULL)
	{
		printf("文件打开失败\n");
		exit(0);
	}
	fwrite(table_dishes,sizeof(struct dish),N*H,ft);
	fclose(ft);

	printf("\t\t\t");
	printf("信息保存成功！\n");

}
