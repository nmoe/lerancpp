#pragma once
//#pragma once��һ���Ƚϳ��õ�C/C++��ע��
//ֻҪ��ͷ�ļ����ʼ����������ע��
//���ܹ���֤ͷ�ļ�ֻ������һ�Ρ�


/*
���ؼ�·�����⣬
�����������޻�ͼ���йؼ�·��

*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
//����
struct ArcNode {
    int start;    //��β�Ķ�����±�
    int end;    //��ͷ�Ķ�����±� ���м�ͷ��һ��
    int weight; //����Ȩ��
    ArcNode * next; //��һ����
};
//ͷ���
struct Vnode {
    ArcNode * firstarc;  //��һ�������ڸøö���Ļ�
    string data;
};

class Graph_DG {
private:
    int vexnum; //�������
    int edge;   //�ߵ�����
    Vnode * arc; //�ڽӱ�
    int *indegree; //���������������
    stack<int> List; //���������и����ߵ����
    int * ve;  //��¼ÿ����������緢��ʱ��
    int * vl;  //��¼ÿ��������ٷ���ʱ��

public:
    Graph_DG(int vexnum, int edge); 
    ~Graph_DG();//��������
    bool check_edge_value(int, int, int); //���ߵ���Ϣ�Ƿ�Ϸ�
    void createGraph();//����һ���µ�ͼ
    void print();//��ӡͼ���ڽӱ�
    bool topological_sort();
    bool CriticalPath();
};