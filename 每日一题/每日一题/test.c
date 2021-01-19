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
//struct user //保存管理员帐号密码的结构体
//{
//    char id[20];  //管理员帐号
//    char passwd[20];  //管理员密码
//    struct user* next;
//};
//typedef struct //保存地点信息的结构体
//{
//    int No;    //校园地点序号
//    char name[20];    //校园地点名
//    char description[200];  //地点描述
//}Vextype;
//typedef struct //邻接矩阵
//{
//    int arcs[MAXVEX][MAXVEX];   //边集
//    Vextype vex[MAXVEX];        //顶点集
//    int vexnum;                 //顶点数目
//    int arcnum;                 //边数目
//}AdjMatrix;
//typedef struct //坐标矩阵
//{
//    int point; //该点是否有校园地点
//    char name[20]; //该点校园地点名
//    int No; //该点校园地点序号
//}SchoolMap;
//
//typedef struct Node
//{
//    int data;  //队列元素的值，存储地点序号
//    struct Node* next;
//}LinkQueueNode;
//typedef struct
//{
//    LinkQueueNode* front; //头指针
//    LinkQueueNode* fear; //尾指针
//}LinkQueue;
//
//int IsEmpty(LinkQueue* Q) //队列判空
//{
//    if (Q->front == Q->fear)
//        return 1;
//    else
//        return 0;
//}
//int InitQueue(LinkQueue* Q)//队的初始化
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
//int EnterQueue(LinkQueue* Q, int x) //入队
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
//int DeleteQueue(LinkQueue* Q, int* x) //出队
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
//    printf("\t\t\t\t|*    ***欢迎使用西安邮电大学长安校区导航***    *|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*----------------------------------------------*|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*     欢迎来到西安邮电大学长安校区！我是世界上 *|\n");
//    printf("\t\t\t\t|* 最机智的导航西邮小o!什么？美广在哪？不知道怎 *|\n");
//    printf("\t\t\t\t|* 么走？最近的路线是啥呀？哈哈~~这些问题都难不 *|\n");
//    printf("\t\t\t\t|* 倒我哦！在这里你可以查看校园平面图，为你展示 *|\n");
//    printf("\t\t\t\t|* 校园地点的总体分布，还可以查询某个地点的相关 *|\n");
//    printf("\t\t\t\t|* 信息，以及两地点间的最短路径、最优路径、最佳 *|\n");
//    printf("\t\t\t\t|* 布网方案，只要你有问题，我都可以即时为你解答 *|\n");
//    printf("\t\t\t\t|* 呢有木有崇拜我的感觉>o< 吼吼，赶快来体验吧   *|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*==============================================*|\n");
//    printf("\n\n");
//    printf("\n\t\t\t\t\t\t按任意键返回...");
//    (void)getch();
//}
//
//
//void Print(AdjMatrix* G)
//{
//    int i, count = 0;
//    printf("\t\t\t\t|================================================|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*    ***欢迎使用西安邮电大学长安校区导航***    *|\n");
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
////采用邻接矩阵创建无向图
//int Create(AdjMatrix* G, SchoolMap M[MAXL][MAXC])
//{
//    int i, j, weight, m, n;
//
//    FILE* fp1;
//    fp1 = fopen("路线信息.txt", "r");
//
//    //从"路线信息.txt"文件中读取校园图的景点数目和路线数目
//    (void)fscanf(fp1, "%d %d", &G->vexnum, &G->arcnum);
//
//    //初始化邻接矩阵
//    for (i = 1; i <= G->vexnum; i++)
//        for (j = 1; j <= G->vexnum; j++) {
//            G->arcs[i][j] = INFINITY;
//        }
//    //读取"路线信息.txt"文件中两点序号及距离，并赋值给邻接矩阵
//    while (fscanf(fp1, "%d %d %d", &i, &j, &weight) != EOF) {
//        G->arcs[i][j] = weight;
//        G->arcs[j][i] = weight;
//    }
//    fclose(fp1);
//
//    FILE* fp2;
//    fp2 = fopen("地点介绍.txt", "rt");
//
//    //从"地点介绍.txt"文件中读取校园图中的景点名及描述
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
////显示平面简图 
//void Display(AdjMatrix* G, SchoolMap M[MAXL][MAXC])
//{
//    int i, j, m, n;
//    system("cls");
//    printf("\n\n");
//    printf("\t\t\t\t|================================================|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*      ***    欢迎使用西安邮电大学导航***      *|\n");
//    printf("\t\t\t\t|*                                              *|\n");
//    printf("\t\t\t\t|*==============================================*|\n\n");
//
//    FILE* fp2;
//    fp2 = fopen("地点介绍.txt", "r");
//
//    //从"地点介绍.txt"文件中读取校园图中的景点名及描述
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
//                j += strlen(M[i][j].name);//跳过文字的长度，使每一行打印的长度相同 
//                j--;//若不减1则跳过一个坐标 
//            }
//            else {
//                printf("`");
//            }
//        }
//        printf("\n");
//    }
//    printf("\n      ********************************************校园路线情况如下***********************************************\n\n");
//    //遍历矩阵，有弧输出
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
//    printf("\n\t\t\t\t\t\t按任意键返回...");
//    (void)getch();
//}
//
////查看地图介绍
//void Description(AdjMatrix* G)
//{
//    int i, j, choice;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t请输入要查询的地点序号(按0返回):");
//        (void)scanf("%d", &choice);
//        if (choice == 0) break;
//        if (choice < 0 || choice > G->vexnum)
//            continue;
//        printf("\n\t\t--->%s:%s\n", G->vex[choice].name, G->vex[choice].description);
//        printf("\t\t\t\t\t该地点的路线情况为:\n");
//        for (i = 1; i <= G->vexnum; i++) {
//            if (i == choice) { //遍历矩阵中该景点序号这一行的各点元素
//                for (j = 1; j <= G->vexnum; j++) {
//                    if (G->arcs[i][j] != INFINITY) { //有弧输出
//                        printf("\t\t\t\t\t%-8s <---> %8s: %3d m\n", G->vex[i].name, G->vex[j].name, G->arcs[i][j]);
//                    }
//                }
//            }
//        }
//        printf("\n\n");
//    } while (1);
//    printf("\n\t\t\t\t\t按任意键返回...");
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
//                w = i;  //求出当前节点的第一个邻接点（求出序号）
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
//                        //w是求的得第一个邻接点，v是相对w下一个邻接点(求出下一个邻接点的序号)
//                    }
//                    break;
//                }
//            }
//        }
//    }
//}
//
////查询最短路线（中转最少）
//void SearchBFS(AdjMatrix* G)
//{
//    int start, end;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t请输入起点序号:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t请输入终点序号:");
//        (void)scanf("%d", &end);
//    } while (start <= 0 || start > G->vexnum);
//
//    if (G->arcs[start][end] != INFINITY)
//        printf("\n\t\t\t\t\t从%s到%s不需要中转，可以直接到达!\n", G->vex[start].name, G->vex[end].name);
//    if (G->arcs[start][end] == INFINITY) {
//        printf("\n\t\t\t\t\t从%s到%s中转次数数最少的路径为:\n\n", G->vex[start].name, G->vex[end].name);
//        printf("\t\t\t☆☆☆");
//        BFS(G, start, end);
//        printf("%s\n", G->vex[end].name);
//    }
//    printf("\n\t\t\t\t\t按任意键返回...");
//    (void)getch();
//
//}
//void DFS(AdjMatrix* G, int m, int i, int end)
//{
//    int j, k;
//    for (j = 1; j <= G->vexnum; j++) {
//        if (G->arcs[i][j] != INFINITY && visited[j] == 0) {//j=0是为了跳开起点 
//            visited[j] = 1;//
//            if (j == end) {
//                count++;//全局变量初始为0 
//                printf("★%d.", count);//输出是第几条路线 
//                for (k = 1; k < m; k++) {
//                    printf("%s->", G->vex[stack[k]].name);
//                }
//                printf("%s\n", G->vex[end].name);//输出最后的地方 
//                visited[j] = 0;
//            }
//            else {
//                stack[m] = j;//把先访问的放入数组中 
//                m++;
//                DFS(G, m, j, end);//以当前结点为开始继续深搜 
//                m--;
//                visited[j] = 0;
//            }
//        }
//    }
//}
//
////查询所有简单路线
//void SearchDFS(AdjMatrix* G)
//{
//    int start, end;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t请输入起点序号:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t请输入终点序号:");
//        (void)scanf("%d", &end);
//    } while (start <= 0 || start > G->vexnum);
//    printf("\n\t\t\t\t\t两地点间的所有路线情况为:\n\n");
//    int m = 2;
//    memset(stack, 0, INFINITY);
//    memset(visited, 0, MAXVEX);
//    stack[1] = start;
//    visited[start] = 1;
//    DFS(G, m, start, end);
//    printf("\n\t\t\t\t\t按任意键返回...");
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
//        dist[i] = G->arcs[start][i];  //对dist数组初始化
//        if (G->arcs[start][i] != INFINITY)
//            path[i][1] = start;  //如果该弧存在，则path[i][1]为源点
//    }
//    path[start][0] = 1; //start加入到S中
//    for (i = 2; i <= G->vexnum; i++) {  //寻找各条最短路径
//        mindist = INFINITY;
//        for (j = 1; j <= G->vexnum; j++)
//            if (!path[j][0] && dist[j] < mindist) {
//                k = j;
//                mindist = dist[j];
//            }
//
//        if (mindist == INFINITY)
//            return;
//        path[k][0] = 1;   //找到最短路径，将该点加入到S集合中
//        for (j = 1; j <= G->vexnum; j++) {  //修改路径
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
//    printf("\n    ★★★%s--->%s的最短路线为: 从%s", G->vex[start].name, G->vex[end].name, G->vex[start].name);
//    for (j = 2; path[i][j] != 0; j++) {
//        printf("->%s", G->vex[path[i][j]].name);
//    }
//    printf("->%s, 距离为%d m\n", G->vex[end].name, dist[i]);
//    printf("\n\t\t\t\t\t按任意键返回...");
//    (void)getch();
//}
//
////采用Dijkstra算法求得从起点建筑到各终点建筑的最短路线
//void Shortcut(AdjMatrix* G)
//{
//    int start, end;
//    int dist[MAXVEX];
//    int path[MAXVEX][MAXVEX] = { {0} };
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t请输入起点:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t请输入终点:");
//        (void)scanf("%d", &end);
//    } while (end <= 0 || end > G->vexnum);
//    Dijkstra(G, start, end, dist, path);
//}
//
//
////增加新地点
//void AddPoint(AdjMatrix* G, SchoolMap M[MAXL][MAXC])
//{
//    int i, j;
//    int x, y;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    printf("\t\t\t\t\t请输入增加的地点名称:");
//    vscanf("%s", G->vex[++G->vexnum].name);
//    G->vex[G->vexnum].No = G->vexnum;
//    printf("\t\t\t\t\t请输入该地点的简介:");
//    (void)scanf("%s", G->vex[G->vexnum].description);
//    do {
//        printf("\t\t\t\t\t请输入该地点的坐标(x,y):");
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
//    fp = fopen("路线信息.txt", "wt");
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
//    fp2 = fopen("地点介绍.txt", "at");
//    fprintf(fp2, "\n%s %d %d %s", G->vex[G->vexnum].name, x, y, G->vex[G->vexnum].description);
//    fclose(fp2);
//    printf("\n\t\t\t\t\t该地点添加成功~快去地图信息里查看吧!\n");
//    printf("\n\t\t\t\t\t按任意键进入下一步...");
//    (void)getch();
//}
//
//
////添加新路线
//void AddEdge(AdjMatrix* G)
//{
//    int i, j;
//    int start, end, weight;//录入起止点，边长 
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t请输入增加路线的起点建筑:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t请输入增加路线的终点建筑:");
//        (void)scanf("%d", &end);
//    } while (end <= 0 || end > G->vexnum);
//    printf("\t\t\t\t\t请输入增加路线的距离:");
//    (void)scanf("%d", &weight);
//    if (G->arcs[start][end] == INFINITY) { //如果以前没有这条弧，则添加
//        G->arcs[start][end] = weight;
//        G->arcs[end][start] = weight;   //并将矩阵元素赋值，图边数+1
//        G->arcnum++;
//
//        //重新将添加新路径之后的图的信息写入"景点信息.txt"文件中
//        FILE* fp;
//        fp = fopen("路线信息.txt", "wt");
//        fprintf(fp, "%d %d\n", G->vexnum, G->arcnum);
//        for (i = 1; i <= G->vexnum; i++)
//            for (j = i; j <= G->vexnum; j++) {
//                if (G->arcs[i][j] != INFINITY) {
//                    fprintf(fp, "%d %d %d\n", i, j, G->arcs[i][j]);
//                }
//            }
//        fclose(fp);
//        printf("\n\t\t\t\t\t这条路线添加成功~快去地图信息里查看吧!\n");
//    }
//
//    else {
//        printf("\n\t\t\t\t\t这条路线已经存在了喔~请勿重复添加呢!\n");
//    }
//    printf("\n\t\t\t\t\t按任意键返回...");
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
//        printf("\t\t\t\t\t请输入撤销的地点序号:");
//        (void)scanf("%d", &No);
//    } while (No <= 0 || No > G->vexnum);
//    G->vexnum--;
//
//    FILE* fp;
//    fp = fopen("景点信息.txt", "wt");
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
//    fp2 = fopen("景点介绍.txt", "wt");
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
//    printf("\n\t\t\t\t\t该地点撤销成功~快去地图信息里查看吧!\n");
//    printf("\n\t\t\t\t\t按任意键进入下一步...");
//    (void)getch();
//}
//
//
////撤销旧路线
//void DelEdge(AdjMatrix* G)
//{
//    int i, j;
//    int start, end;
//    system("cls");
//    printf("\n\n");
//    Print(G);
//    do {
//        printf("\t\t\t\t\t请输入撤销路线的起点建筑:");
//        (void)scanf("%d", &start);
//    } while (start <= 0 || start > G->vexnum);
//    do {
//        printf("\t\t\t\t\t请输入撤销路线的终点建筑:");
//        (void)scanf("%d", &end);
//    } while (end <= 0 || end > G->vexnum);
//
//
//    if (G->arcs[start][end] != INFINITY) {  //如果以前有这条弧
//        G->arcs[start][end] = INFINITY;
//        G->arcs[end][start] = INFINITY;  //则将矩阵元素赋值为无穷，表示没有这条弧了
//        G->arcnum--;     //并将图的边数-1
//
//        ////重新将撤销弧之后的图的信息写入"景点信息.txt"文件中
//        FILE* fp;
//        fp = fopen("路线信息.txt", "wt");
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
//        printf("\n\t\t\t\t\t这条路线撤销成功~快去地图信息里查看吧!\n");
//    }
//    else {
//        printf("\n\t\t\t\t\t这条路线不存在喔~\n");
//    }
//    printf("\n\t\t\t\t\t按任意键返回...");
//    (void)getch();
//
//}
//
//void Colorsetting()//颜色选择主菜单 
//{
//    int a;
//    char choice;
//    system("cls");
//    printf("\n\n");
//    printf("\t┏━━━请选择一下您的背景━━━┓\n");
//    printf("\t┣┄┄┄┄1.红底黑字┄┄┄┄┄┄┫\n");
//    printf("\t┣┄┄┄┄2.白底黑字┄┄┄┄┄┄┫\n");
//    printf("\t┣┄┄┄┄3.黑底红字┄┄┄┄┄┄┫\n");
//    printf("\t┣┄┄┄┄4.绿底蓝字┄┄┄┄┄┄┫\n");
//    printf("\t┣┄┄┄┄5.黄底紫字┄┄┄┄┄┄┫\n");
//    printf("\t┣┄┄┄┄6.系统默认┄┄┄┄┄┄┫\n");
//    printf("\t┗━━━━━━━━━━━━━━━┛\n");
//    printf("\n\t请输入你喜欢的颜色<1-6>:   ");
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
//        printf("\n\t输入无效,请重新输入\n");
//        (void)getch();//接收任意字符，使程序进入颜色选择主菜单，若无这一步，程序不执行下一行 
//        Colorsetting();
//    }
//    printf("\n\n\t皮肤不行，换换就行，回车继续换\n\t或者<<按y进入主界面>>\n");
//    fflush(stdin);//清除输入缓存区，用于输入两个字符之间 
//    printf("\t");
//    (void)scanf("%c", &choice);
//    if (choice == 'Y' || choice == 'y')//用y判断是否进入主菜单 
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
//        printf("\t\t\t\t|*    ***欢迎使用西安邮电大学长安校区导航***    *|\n");
//        printf("\t\t\t\t|*                                              *|\n");
//        printf("\t\t\t\t|*----------------------------------------------*|\n");
//        printf("\t\t\t\t|*                                              *|\n");
//        printf("\t\t\t\t|*               1. 导航使用说明                *|\n");
//        printf("\t\t\t\t|*               2. 校园平面简图                *|\n");
//        printf("\t\t\t\t|*               3. 查看地点信息                *|\n");
//        printf("\t\t\t\t|*               4. 查询简单路线                *|\n");
//        printf("\t\t\t\t|*               5. 查询中转最短                *|\n");
//        printf("\t\t\t\t|*               6. 查询距离最短                *|\n");
//        printf("\t\t\t\t|*               7. 添加新地点                  *|\n");
//        printf("\t\t\t\t|*               8. 删除新地点                  *|\n");
//        printf("\t\t\t\t|*               9. 添加新路线                  *|\n");
//        printf("\t\t\t\t|*               10.删除旧路线                  *|\n");
//        printf("\t\t\t\t|*               11.皮肤更换                    *|\n");
//        printf("\t\t\t\t|*               0. 退出                        *|\n");
//        printf("\t\t\t\t|*                                              *|\n");
//        printf("\t\t\t\t|*==============================================*|\n");
//        printf("\n\n");
//        do {
//            printf("\t\t\t\t请选择您要进行的操作(输入0——11):");
//            (void)scanf("%d", &choice);
//        } while (choice < 0 || choice>11);
//        (void)getchar();
//        printf("\t\t\t\t按任意键进入下一步...");
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
//void process()//主菜单进入前提示动画 
//{
//    system("cls");
//    printf("\n\n\n\n\n\n\n");
//    printf("\t\t恭喜打开成功！即将进入导航系统\n");
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