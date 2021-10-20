/*链表*/
#ifndef _LINK_H_
#define _LINK_H_

#include ".general.h"
#define HEAD_NODE 0xABCABC

/*Structure Declaration*/
typedef struct Node *Pos;
typedef struct Node *Link;
struct Node {
    ElemType elem;
    Pos next;
};

/*Function Declaration*/
//创建链表(带头结点)
Link CreateLink(void);
//定位：返回链表L中第subs个结点的地址
Pos Locate(Link L, Cursor subs);
//插入(地址)：在地址pre后插入一个结点
bool Insertpos(Pos pre, ElemType E);
//插入(游标)：在第subs个结点后插入一个结点
bool Insertcur(Link L, Cursor subs, ElemType E);
//插入(尾部)：在尾部插入一个结点
bool Insertend(Link L, ElemType E);
//删除(地址)：删除地址pre指向节点的后一个结点
bool Deletepos(Pos pre);
//删除(游标)：删除第subs个结点
bool Deletecur(Link L, Cursor subs);
//查找：返回链表L中第subs个结点的元素值
ElemType Search(Link L, Cursor subs);
//返回链表长度
int LinkLength(Link L);
//打印链表
bool PrintLink(Link L);

#endif