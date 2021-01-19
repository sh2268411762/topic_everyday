//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <ctype.h>
//#include <string.h>
//#include <io.h>
//#include <windows.h>
//#include <string.h>
//#define MAXVEX 50
//#define INFINITY 32768
//#define MAXL 20
//#define MAXC 66
//
//
//int visited[INFINITY];
//int stack[INFINITY];
//int count;
//
//struct user //�������Ա�ʺ�����Ľṹ��
//{
//    char id[20];  //����Ա�ʺ�
//    char passwd[20];  //����Ա����
//    struct user* next;
//};
//typedef struct //����ص���Ϣ�Ľṹ��
//{
//    int No;    //У԰�ص����
//    char name[20];    //У԰�ص���
//    char description[200];  //�ص�����
//}Vextype;
//typedef struct //�ڽӾ���
//{
//    int arcs[MAXVEX][MAXVEX];   //�߼�
//    Vextype vex[MAXVEX];        //���㼯
//    int vexnum;                 //������Ŀ
//    int arcnum;                 //����Ŀ
//}AdjMatrix;
//typedef struct //�������
//{
//    int point; //�õ��Ƿ���У԰�ص�
//    char name[20]; //�õ�У԰�ص���
//    int No; //�õ�У԰�ص����
//}SchoolMap;
//
//typedef struct Node
//{
//    int data;  //����Ԫ�ص�ֵ���洢�ص����
//    struct Node* next;
//}LinkQueueNode;
//typedef struct
//{
//    LinkQueueNode* front; //ͷָ��
//    LinkQueueNode* fear; //βָ��
//}LinkQueue;
//
//int IsEmpty(LinkQueue* Q) //�����п�
//{
//    if (Q->front == Q->fear)
//        return 1;
//    else
//        return 0;
//}
//int InitQueue(LinkQueue* Q)//�ӵĳ�ʼ��
//{
//    Q->front = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//    if (Q->front != NULL) {
//        Q->fear = Q->front;
//        Q->front->next = NULL;
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//int EnterQueue(LinkQueue* Q, int x) //���
//{
//    LinkQueueNode* NewNode;
//    NewNode = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//    if (NewNode != NULL) {
//        NewNode->data = x;
//        NewNode->next = NULL;
//        Q->fear->next = NewNode;
//        Q->fear = NewNode;
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//int DeleteQueue(LinkQueue* Q, int* x) //����
//{
//    LinkQueueNode* p;
//    if (Q->front == Q->fear)
//        return 1;
//    p = Q->front->next;
//    Q->front->next = p->next;
//    if (Q->fear == p)
//        Q->fear = Q->front;
//    *x = p->data;
//    free(p);
//    return 1;
//}
//void Introduce()
//{
//    system("cls");
//    printf("\n\n");
//    printf("\t\t\t\t|================================================|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*    ***��ӭʹ�������ʵ��ѧ����У������***    *|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*----------------------------------------------*|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*     ��ӭ���������ʵ��ѧ����У�������������� *|\n");
//    printf("\t\t\t\t|* ����ǵĵ�������Сo!ʲô���������ģ���֪���� *|\n");
//    printf("\t\t\t\t|* ô�ߣ������·����ɶѽ������~~��Щ���ⶼ�Ѳ� *|\n");
//    printf("\t\t\t\t|* ����Ŷ������������Բ鿴У԰ƽ��ͼ��Ϊ��չʾ *|\n");
//    printf("\t\t\t\t|* У԰�ص������ֲ��������Բ�ѯĳ���ص����� *|\n");
//    printf("\t\t\t\t|* ��Ϣ���Լ����ص������·��������·������� *|\n");
//    printf("\t\t\t\t|* ����������ֻҪ�������⣬�Ҷ����Լ�ʱΪ���� *|\n");
//    printf("\t\t\t\t|* ����ľ�г���ҵĸо�>o< ��𣬸Ͽ��������   *|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*==============================================*|\n");
//    printf("\n\n");
//    printf("\n\t\t\t\t\t\t�����������...");
//    (void)getch();
//}
//
//
//void Print(AdjMatrix* G)
//{
//    int i, count = 0;
//    printf("\t\t\t\t|================================================|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*    ***��ӭʹ�������ʵ��ѧ����У������***    *|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*==============================================*|\n\n");
//    for (i = 1; i <= G->vexnum; i++) {
//        printf("    %d.%-8s\t", i, G->vex[i].name);
//        count++;
//        if (count == 7) {
//            printf("\n");
//            count = 0;
//        }
//    }
//    printf("\n\n");
//}
//
////�����ڽӾ��󴴽�����ͼ
//int Create(AdjMatrix* G, SchoolMap M[MAXL][MAXC])
//{
//    int i, j, weight, m, n;
//
//    FILE* fp1;
//    fp1 = fopen("·����Ϣ.txt", "r");
//
//    //��"·����Ϣ.txt"�ļ��ж�ȡУ԰ͼ�ľ�����Ŀ��·����Ŀ
//    (void)fscanf(fp1, "%d %d", &G->vexnum, &G->arcnum);
//
//    //��ʼ���ڽӾ���
//    for (i = 1; i <= G->vexnum; i++)
//        for (j = 1; j <= G->vexnum; j++) {
//            G->arcs[i][j] = INFINITY;
//        }
//    //��ȡ"·����Ϣ.txt"�ļ���������ż����룬����ֵ���ڽӾ���
//    while (fscanf(fp1, "%d %d %d", &i, &j, &weight) != EOF) {
//        G->arcs[i][j] = weight;
//        G->arcs[j][i] = weight;
//    }
//    fclose(fp1);
//
//    FILE* fp2;
//    fp2 = fopen("�ص����.txt", "rt");
//
//    //��"�ص����.txt"�ļ��ж�ȡУ԰ͼ�еľ�����������
//    for (i = 1; i <= G->vexnum; i++) {
//        G->vex[i].No = i;
//        (void)fscanf(fp2, "%s %d %d %s", G->vex[i].name, &m, &n, G->vex[i].description);
//        M[m][n].point = 1;
//        M[m][n].No = i;
//        strcpy(M[m][n].name, G->vex[i].name);
//    }
//    fclose(fp2);
//    return 1;
//}
//
////��ʾƽ���ͼ 
//void Display(AdjMatrix* G, SchoolMap M[MAXL][MAXC])
//{
//    int i, j, m, n;
//    system("cls");
//    printf("\n\n");
//    printf("\t\t\t\t|================================================|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*      ***    ��ӭʹ�������ʵ��ѧ����***      *|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*==============================================*|\n\n");
//
//    FILE* fp2;
//    fp2 = fopen("�ص����.txt", "r");
//
//    //��"�ص����.txt"�ļ��ж�ȡУ԰ͼ�еľ�����������
//    for (i = 1; i <= G->vexnum; i++) {
//        G->vex[i].No = i;
//        (void)fscanf(fp2, "%s %d %d %s", G->vex[i].name, &m, &n, G->vex[i].description);
//        M[m][n].point = 1;
//        strcpy(M[m][n].name, G->vex[i].name);
//
//    }
//    fclose(fp2);
//    int count = 0;
//    for (i = 1; i <= MAXL; i++) {
//        printf("\t\t\t");
//        for (j = 1; j <= MAXC; j++) {
//            if (M[i][j].point == 1) {
//                printf("%s", M[i][j].name);
//                j += strlen(M[i][j].name);//�������ֵĳ��ȣ�ʹÿһ�д�ӡ�ĳ�����ͬ 
//                j--;//������1������һ������ 
//            }
//            else {
//                printf("`");
//            }
//        }
//        printf("\n");
//    }
//    printf("\n      ********************************************У԰·���������***********************************************\n\n");
//    //���������л����
//    for (i = 1; i <= G->vexnum; i++) {
//        for (j = 1; j <= G->vexnum; j++) {
//            if (G->arcs[i][j] != INFINITY && G->arcs[i][j] != 0) {
//                printf("      %-8s <---> %8s: %3d m  ", G->vex[i].name, G->vex[j].name, G->arcs[i][j]);
//                count++;
//                if (count == 3) {
//                    printf("\n");
//                    count = 0;
//                }
//            }
//        }
//    }
//    printf("\n\t\t\t\t\t\t�����������...");
//    (void)getch();
//}
//
////�鿴��ͼ����
//void Description(AdjMatrix* G)
//{
//    int i, j, choice;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t������Ҫ��ѯ�ĵص����(��0����):");
//        (void)scanf("%d", &choice);
//        if (choice == 0) break;
//        if (choice < 0 || choice > G->vexnum)
//            continue;
//        printf("\n\t\t--->%s:%s\n", G->vex[choice].name, G->vex[choice].description);
//        printf("\t\t\t\t\t�õص��·�����Ϊ:\n");
//        for (i = 1; i <= G->vexnum; i++) {
//            if (i == choice) { //���������иþ��������һ�еĸ���Ԫ��
//                for (j = 1; j <= G->vexnum; j++) {
//                    if (G->arcs[i][j] != INFINITY) { //�л����
//                        printf("\t\t\t\t\t%-8s <---> %8s: %3d m\n", G->vex[i].name, G->vex[j].name, G->arcs[i][j]);
//                    }
//                }
//            }
//        }
//        printf("\n\n");
//    } while (1);
//    printf("\n\t\t\t\t\t�����������...");
//    (void)getch();
//}
//int NextAdjVertex(AdjMatrix* G, int w, int v)
//{
//    int i, j;
//    for (i = w + 1; i < G->vexnum; i++) {
//        if (G->arcs[v][i] != INFINITY) {
//            j = i;
//            return j;
//        }
//    }
//    return -1;
//}
//
//void BFS(AdjMatrix* G, int start, int end)
//{
//    int vis[INFINITY];
//    int i, num;
//    int w, v;
//    LinkQueue* Q;
//
//    Q = (LinkQueue*)malloc(sizeof(LinkQueue));
//    if (start == end)
//        return;
//    memset(vis, 0, INFINITY);
//    vis[start] = 1;
//    InitQueue(Q);
//    EnterQueue(Q, start);
//    while (Q->front != Q->fear) {
//        DeleteQueue(Q, &v);
//        num = v;
//        for (i = 1; i <= G->vexnum; i++) {
//            if (G->arcs[num][i] != INFINITY) {
//                w = i;  //�����ǰ�ڵ�ĵ�һ���ڽӵ㣨�����ţ�
//                while (w != -1) {
//                    if (vis[w] == 0) {
//                        if (w == end) {
//                            BFS(G, start, num);
//                            printf("%s->", G->vex[num].name);
//                            return;
//                        }
//                        vis[w] = 1;
//                        EnterQueue(Q, w);
//                        w = NextAdjVertex(G, w, v);
//                        //w����ĵõ�һ���ڽӵ㣬v�����w��һ���ڽӵ�(�����һ���ڽӵ�����)
//                    }
//                    break;
//                }
//            }
//        }
//    }
//}
//
////��ѯ���·�ߣ���ת���٣�
//void SearchBFS(AdjMatrix* G)
//{
//    int start, end;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t������������:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t�������յ����:");
//        (void)scanf("%d", &end);
//    } while (start <= 0 || start > G->vexnum);
//
//    if (G->arcs[start][end] != INFINITY)
//        printf("\n\t\t\t\t\t��%s��%s����Ҫ��ת������ֱ�ӵ���!\n", G->vex[start].name, G->vex[end].name);
//    if (G->arcs[start][end] == INFINITY) {
//        printf("\n\t\t\t\t\t��%s��%s��ת���������ٵ�·��Ϊ:\n\n", G->vex[start].name, G->vex[end].name);
//        printf("\t\t\t����");
//        BFS(G, start, end);
//        printf("%s\n", G->vex[end].name);
//    }
//    printf("\n\t\t\t\t\t�����������...");
//    (void)getch();
//
//}
//void DFS(AdjMatrix* G, int m, int i, int end)
//{
//    int j, k;
//    for (j = 1; j <= G->vexnum; j++) {
//        if (G->arcs[i][j] != INFINITY && visited[j] == 0) {//j=0��Ϊ��������� 
//            visited[j] = 1;//
//            if (j == end) {
//                count++;//ȫ�ֱ�����ʼΪ0 
//                printf("��%d.", count);//����ǵڼ���·�� 
//                for (k = 1; k < m; k++) {
//                    printf("%s->", G->vex[stack[k]].name);
//                }
//                printf("%s\n", G->vex[end].name);//������ĵط� 
//                visited[j] = 0;
//            }
//            else {
//                stack[m] = j;//���ȷ��ʵķ��������� 
//                m++;
//                DFS(G, m, j, end);//�Ե�ǰ���Ϊ��ʼ�������� 
//                m--;
//                visited[j] = 0;
//            }
//        }
//    }
//}
//
////��ѯ���м�·��
//void SearchDFS(AdjMatrix* G)
//{
//    int start, end;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t������������:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t�������յ����:");
//        (void)scanf("%d", &end);
//    } while (start <= 0 || start > G->vexnum);
//    printf("\n\t\t\t\t\t���ص�������·�����Ϊ:\n\n");
//    int m = 2;
//    memset(stack, 0, INFINITY);
//    memset(visited, 0, MAXVEX);
//    stack[1] = start;
//    visited[start] = 1;
//    DFS(G, m, start, end);
//    printf("\n\t\t\t\t\t�����������...");
//    memset(stack, 0, INFINITY);
//    memset(visited, 0, MAXVEX);
//    count = 0;
//    (void)getch();
//}
//
//
//
//void Dijkstra(AdjMatrix* G, int start, int end, int dist[], int path[][MAXVEX])
//{
//    int mindist, i, j, k, t = 1;
//    for (i = 1; i <= G->vexnum; i++) {
//        dist[i] = G->arcs[start][i];  //��dist�����ʼ��
//        if (G->arcs[start][i] != INFINITY)
//            path[i][1] = start;  //����û����ڣ���path[i][1]ΪԴ��
//    }
//    path[start][0] = 1; //start���뵽S��
//    for (i = 2; i <= G->vexnum; i++) {  //Ѱ�Ҹ������·��
//        mindist = INFINITY;
//        for (j = 1; j <= G->vexnum; j++)
//            if (!path[j][0] && dist[j] < mindist) {
//                k = j;
//                mindist = dist[j];
//            }
//
//        if (mindist == INFINITY)
//            return;
//        path[k][0] = 1;   //�ҵ����·�������õ���뵽S������
//        for (j = 1; j <= G->vexnum; j++) {  //�޸�·��
//            if (!path[j][0] && G->arcs[k][j] < INFINITY && dist[k] + G->arcs[k][j] < dist[j]) {
//                dist[j] = dist[k] + G->arcs[k][j];
//                t = 1;
//                while (path[k][t] != 0) {
//                    path[j][t] = path[k][t];
//                    t++;
//                }
//                path[j][t] = k;
//                path[j][t + 1] = 0;
//            }
//        }
//    }
//
//    for (i = 1; i <= G->vexnum; i++)
//        if (i == end)
//            break;
//    printf("\n    ����%s--->%s�����·��Ϊ: ��%s", G->vex[start].name, G->vex[end].name, G->vex[start].name);
//    for (j = 2; path[i][j] != 0; j++) {
//        printf("->%s", G->vex[path[i][j]].name);
//    }
//    printf("->%s, ����Ϊ%d m\n", G->vex[end].name, dist[i]);
//    printf("\n\t\t\t\t\t�����������...");
//    (void)getch();
//}
//
////����Dijkstra�㷨��ô���㽨�������յ㽨�������·��
//void Shortcut(AdjMatrix* G)
//{
//    int start, end;
//    int dist[MAXVEX];
//    int path[MAXVEX][MAXVEX] = { {0} };
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t���������:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t�������յ�:");
//        (void)scanf("%d", &end);
//    } while (end <= 0 || end > G->vexnum);
//    Dijkstra(G, start, end, dist, path);
//}
//
//
////�����µص�
//void AddPoint(AdjMatrix* G, SchoolMap M[MAXL][MAXC])
//{
//    int i, j;
//    int x, y;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    printf("\t\t\t\t\t���������ӵĵص�����:");
//    vscanf("%s", G->vex[++G->vexnum].name);
//    G->vex[G->vexnum].No = G->vexnum;
//    printf("\t\t\t\t\t������õص�ļ��:");
//    (void)scanf("%s", G->vex[G->vexnum].description);
//    do {
//        printf("\t\t\t\t\t������õص������(x,y):");
//        (void)scanf("%d,%d", &x, &y);
//    } while ((x <= 0 || x >= 20) || (y <= 0 || y >= 63));
//    M[x][y].point = 1;
//    M[x][y].No = G->vexnum;
//    strcpy(M[x][y].name, G->vex[G->vexnum].name);
//    for (i = 1; i <= G->vexnum; i++) {
//        G->arcs[G->vexnum][i] = INFINITY;
//        G->arcs[i][G->vexnum] = INFINITY;
//    }
//
//    FILE* fp;
//    fp = fopen("·����Ϣ.txt", "wt");
//    fprintf(fp, "%d %d\n", G->vexnum, G->arcnum);
//    for (i = 1; i <= G->vexnum; i++)
//        for (j = i; j <= G->vexnum; j++) {
//            if (G->arcs[i][j] != INFINITY) {
//                fprintf(fp, "%d %d %d\n", i, j, G->arcs[i][j]);
//            }
//        }
//    fclose(fp);
//
//    FILE* fp2;
//    fp2 = fopen("�ص����.txt", "at");
//    fprintf(fp2, "\n%s %d %d %s", G->vex[G->vexnum].name, x, y, G->vex[G->vexnum].description);
//    fclose(fp2);
//    printf("\n\t\t\t\t\t�õص���ӳɹ�~��ȥ��ͼ��Ϣ��鿴��!\n");
//    printf("\n\t\t\t\t\t�������������һ��...");
//    (void)getch();
//}
//
//
////�����·��
//void AddEdge(AdjMatrix* G)
//{
//    int i, j;
//    int start, end, weight;//¼����ֹ�㣬�߳� 
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t����������·�ߵ���㽨��:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t����������·�ߵ��յ㽨��:");
//        (void)scanf("%d", &end);
//    } while (end <= 0 || end > G->vexnum);
//    printf("\t\t\t\t\t����������·�ߵľ���:");
//    (void)scanf("%d", &weight);
//    if (G->arcs[start][end] == INFINITY) { //�����ǰû���������������
//        G->arcs[start][end] = weight;
//        G->arcs[end][start] = weight;   //��������Ԫ�ظ�ֵ��ͼ����+1
//        G->arcnum++;
//
//        //���½������·��֮���ͼ����Ϣд��"������Ϣ.txt"�ļ���
//        FILE* fp;
//        fp = fopen("·����Ϣ.txt", "wt");
//        fprintf(fp, "%d %d\n", G->vexnum, G->arcnum);
//        for (i = 1; i <= G->vexnum; i++)
//            for (j = i; j <= G->vexnum; j++) {
//                if (G->arcs[i][j] != INFINITY) {
//                    fprintf(fp, "%d %d %d\n", i, j, G->arcs[i][j]);
//                }
//            }
//        fclose(fp);
//        printf("\n\t\t\t\t\t����·����ӳɹ�~��ȥ��ͼ��Ϣ��鿴��!\n");
//    }
//
//    else {
//        printf("\n\t\t\t\t\t����·���Ѿ��������~�����ظ������!\n");
//    }
//    printf("\n\t\t\t\t\t�����������...");
//    (void)getch();
//}
//
//
//void DelPoint(AdjMatrix* G, SchoolMap M[MAXL][MAXC])
//{
//    int i, j, k;
//    int x, y;
//    int No;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t�����볷���ĵص����:");
//        (void)scanf("%d", &No);
//    } while (No <= 0 || No > G->vexnum);
//    G->vexnum--;
//
//    FILE* fp;
//    fp = fopen("������Ϣ.txt", "wt");
//    fprintf(fp, "%d %d\n", G->vexnum, G->arcnum);
//    for (i = 1; i <= G->vexnum; i++)
//        for (j = i; j <= G->vexnum; j++) {
//            if (G->arcs[i][j] != INFINITY) {
//                fprintf(fp, "%d %d %d\n", i, j, G->arcs[i][j]);
//            }
//        }
//    fclose(fp);
//
//    FILE* fp2;
//    fp2 = fopen("�������.txt", "wt");
//    for (i = 1; i <= G->vexnum; i++) {
//        for (j = 1; j <= G->vexnum; j++) {
//            for (k = 1; k <= G->vexnum; k++) {
//                if (i == M[j][k].No) {
//                    x = j;
//                    y = k;
//                }
//            }
//        }
//        fprintf(fp2, "%s %d %d %s\n", G->vex[i].name, x, y, G->vex[i].description);
//    }
//    fclose(fp2);
//    printf("\n\t\t\t\t\t�õص㳷���ɹ�~��ȥ��ͼ��Ϣ��鿴��!\n");
//    printf("\n\t\t\t\t\t�������������һ��...");
//    (void)getch();
//}
//
//
////������·��
//void DelEdge(AdjMatrix* G)
//{
//    int i, j;
//    int start, end;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t�����볷��·�ߵ���㽨��:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t�����볷��·�ߵ��յ㽨��:");
//        (void)scanf("%d", &end);
//    } while (end <= 0 || end > G->vexnum);
//
//
//    if (G->arcs[start][end] != INFINITY) {  //�����ǰ��������
//        G->arcs[start][end] = INFINITY;
//        G->arcs[end][start] = INFINITY;  //�򽫾���Ԫ�ظ�ֵΪ�����ʾû����������
//        G->arcnum--;     //����ͼ�ı���-1
//
//        ////���½�������֮���ͼ����Ϣд��"������Ϣ.txt"�ļ���
//        FILE* fp;
//        fp = fopen("·����Ϣ.txt", "wt");
//        fprintf(fp, "%d %d", G->vexnum, G->arcnum);
//        fputc('\n', fp);
//        for (i = 1; i <= G->vexnum; i++)
//            for (j = i; j <= G->vexnum; j++) {
//                if (G->arcs[i][j] != INFINITY) {
//                    fprintf(fp, "%d %d %d", i, j, G->arcs[i][j]);
//                    fputc('\n', fp);
//                }
//            }
//        fclose(fp);
//        printf("\n\t\t\t\t\t����·�߳����ɹ�~��ȥ��ͼ��Ϣ��鿴��!\n");
//    }
//    else {
//        printf("\n\t\t\t\t\t����·�߲������~\n");
//    }
//    printf("\n\t\t\t\t\t�����������...");
//    (void)getch();
//
//}
//
//void Colorsetting()//��ɫѡ�����˵� 
//{
//    int a;
//    char choice;
//    system("cls");
//    printf("\n\n");
//    printf("\t����������ѡ��һ�����ı�����������\n");
//    printf("\t�ǩ�������1.��׺��֩�������������\n");
//    printf("\t�ǩ�������2.�׵׺��֩�������������\n");
//    printf("\t�ǩ�������3.�ڵ׺��֩�������������\n");
//    printf("\t�ǩ�������4.�̵����֩�������������\n");
//    printf("\t�ǩ�������5.�Ƶ����֩�������������\n");
//    printf("\t�ǩ�������6.ϵͳĬ�ϩ�������������\n");
//    printf("\t����������������������������������\n");
//    printf("\n\t��������ϲ������ɫ<1-6>:   ");
//    (void)scanf("%d", &a);
//    switch (a)
//    {
//    case 1:
//        system("color 40");
//        break;
//    case 2:
//        system("color 70");
//        break;
//    case 3:
//        system("color 04");
//        break;
//    case 4:
//        system("color 21");
//        break;
//    case 5:
//        system("color 65");
//        break;
//    case 6:
//        system("color 1a");
//        break;
//    default:
//        printf("\n\t������Ч,����������\n");
//        (void)getch();//���������ַ���ʹ���������ɫѡ�����˵���������һ��������ִ����һ�� 
//        Colorsetting();
//    }
//    printf("\n\n\tƤ�����У��������У��س�������\n\t����<<��y����������>>\n");
//    fflush(stdin);//������뻺�������������������ַ�֮�� 
//    printf("\t");
//    (void)scanf("%c", &choice);
//    if (choice == 'Y' || choice == 'y')//��y�ж��Ƿ�������˵� 
//    {
//        system("cls");
//    }
//    else
//    {
//        Colorsetting();
//    }
//}
//
//int user()
//{
//    AdjMatrix G;
//    SchoolMap M[MAXL][MAXC];
//    int choice;
//    Create(&G, M);
//    do {
//        system("cls");
//        printf("\n\n");
//        printf("\t\t\t\t|================================================|\n");
//        printf("\t\t\t\t|*                                              *|\n");
//        printf("\t\t\t\t|*    ***��ӭʹ�������ʵ��ѧ����У������***    *|\n");
//        printf("\t\t\t\t|*                                              *|\n");
//        printf("\t\t\t\t|*----------------------------------------------*|\n");
//        printf("\t\t\t\t|*                                              *|\n");
//        printf("\t\t\t\t|*               1. ����ʹ��˵��                *|\n");
//        printf("\t\t\t\t|*               2. У԰ƽ���ͼ                *|\n");
//        printf("\t\t\t\t|*               3. �鿴�ص���Ϣ                *|\n");
//        printf("\t\t\t\t|*               4. ��ѯ��·��                *|\n");
//        printf("\t\t\t\t|*               5. ��ѯ��ת���                *|\n");
//        printf("\t\t\t\t|*               6. ��ѯ�������                *|\n");
//        printf("\t\t\t\t|*               7. ����µص�                  *|\n");
//        printf("\t\t\t\t|*               8. ɾ���µص�                  *|\n");
//        printf("\t\t\t\t|*               9. �����·��                  *|\n");
//        printf("\t\t\t\t|*               10.ɾ����·��                  *|\n");
//        printf("\t\t\t\t|*               11.Ƥ������                    *|\n");
//        printf("\t\t\t\t|*               0. �˳�                        *|\n");
//        printf("\t\t\t\t|*                                              *|\n");
//        printf("\t\t\t\t|*==============================================*|\n");
//        printf("\n\n");
//        do {
//            printf("\t\t\t\t��ѡ����Ҫ���еĲ���(����0����11):");
//            (void)scanf("%d", &choice);
//        } while (choice < 0 || choice>11);
//        (void)getchar();
//        printf("\t\t\t\t�������������һ��...");
//        (void)getch();
//        printf("\n");
//        switch (choice)
//        {
//        case 1:Introduce(); break;
//        case 2:Display(&G, M); break;
//        case 3:Description(&G); break;
//        case 4:SearchDFS(&G); break;
//        case 5:SearchBFS(&G); break;
//        case 6:Shortcut(&G); break;
//        case 7:AddPoint(&G, M); break;
//        case 8:DelPoint(&G, M); break;
//        case 9:AddEdge(&G); break;
//        case 10:DelEdge(&G); break;
//        case 11:Colorsetting(); break;
//        case 0:exit(0);
//        }
//    } while (1);
//}
//
//
//void process()//���˵�����ǰ��ʾ���� 
//{
//    system("cls");
//    printf("\n\n\n\n\n\n\n");
//    printf("\t\t��ϲ�򿪳ɹ����������뵼��ϵͳ\n");
//    Sleep(1100);
//
//    system("cls");
//    printf("\n\n\n\n\n\n\n");
//    printf("\t\tThe system is loading !!! \n");
//    printf("\t\t3...\n");
//    Sleep(700);
//    system("cls");
//    printf("\n\n\n\n\n\n\n");
//    printf("\t\t2..\n");
//    Sleep(400);
//    system("cls");
//    printf("\n\n\n\n\n\n\n");
//    printf("\t\t1.\n");
//    Sleep(400);
//    system("cls");
//
//    printf("\n\n\n\n\n\n\n");
//    printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
//    printf("\t\t~********************************************************************************~\n");
//    printf("\t\t~  *      *      *  * * * *  *        * * *    * * *       *     *     * * * *   ~\n");
//    printf("\t\t~  *      *      *  *        *       *       *       *    * *   * *    *         ~\n");
//    printf("\t\t~   *     *     *   * * * *  *      *       *         *  *   * *   *   * * * *   ~\n");
//    printf("\t\t~    *  *   *  *    *        *       *       *       *  *     *     *  *         ~\n");
//    printf("\t\t~     *       *     * * * *  * * * *  * * *    * * *    *     *     *  * * * *   ~\n");
//    printf("\t\t~********************************************************************************~\n");
//    printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
//    Sleep(1300);
//    printf("\n\n\n\n\n\n\n");
//    system("cls");
//}
//
//int main()
//{
//    int choice;
//    process();
//    user();
//
//    return 0;
//}