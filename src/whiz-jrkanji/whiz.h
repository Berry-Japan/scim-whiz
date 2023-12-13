//---------------------------------------------------------
//	Whiz (Japanese Input Method Engine)
//
//		(C)2003-2006 NAKADA
//---------------------------------------------------------

#ifndef __whiz_conf__
#define __whiz_conf__


// Version
#define WHIZ_VER	"0.52"				// Version
#define WHIZ_CODE	"Indus"				// Code Name

// Directories
#define WHIZ_DIR	"/opt/whiz"			// Install dir
#define WHIZ_DIC	WHIZ_DIR "/dic/"		// Dictionaries dir
#define WHIZ_ETC	WHIZ_DIR "/etc"			// Etc dir

// Define Dictionaries
#define WHIZDIC		WHIZ_DIC "whiz.dic"		// Words Dictionaries
#define WHIZINX		WHIZ_DIC "whiz.inx"		// Index of Words Dictionaries

#define GRAMMARDIC	WHIZ_DIC "grammar.dic"		// Word Class Dictionary

#define CONNECTDIC	WHIZ_DIC "connect.dic"		// Connection Dictionary
#define CONNECTINX	WHIZ_DIC "connect.inx"		// Index of Connection Dictionary

#define FORMSDIC	WHIZ_DIC "forms.dic"		// Forms Dictionary

// Dictionary Type
#define BINARYDIC					// Binary


// for Whiz
#define LINEMAX		8192
#define WORDMAX		100

#define REFMAX		2000				// Max of Refernce
#define PATHMAX		50000				// Max of Path

#define TYPESMAX	75				// ������ѷ���
#define FORMSMAX	30				// ������ѷ���

//#define ANALYSISMAX	30				// ������Ͽ�
#define MAXSENTENCE	50				// ��¸���Ƥ��������
#define MAXSEGMENT	100				// ����ʬ���


// for Debug
//#define DEBUG
#define SYSLOG


// for Server and Client
#define USE_UNIX_SOCKET
//#define USE_INET_SOCKET

#define IR_UNIX_DIR		"/tmp/.iroha_unix"
#define IR_UNIX_SOCKNAME	"IROHA"
#define IR_UNIX_PATH		IR_UNIX_DIR "/" IR_UNIX_SOCKNAME
#define IR_SERVICE_NAME		"canna"
#define IR_DEFAULT_PORT		5680

#define PIDPATH			"/tmp/"
#define WHIZ_PID_PATH		PIDPATH "/whiz.pid"

#define MAXSOCK			8			// ���祽���åȿ�(����32)


#define OP_SYSLOG		1
#define OP_INET			2


#ifdef __cplusplus
//---------------------------------------------------------
//	Whiz Class
//---------------------------------------------------------

class WHIZ {
public:
	//DIC_INFO di;
	//PATH_INFO pi;
	//CONNECT_INFO cinfo;
	//CONNECT con[12700];
	//PATH path[PATHMAX];
	//DIC dic[REFMAX];
	//INFLECT inf[80];

	int seg;		// ʸ���
	int p[MAXSEGMENT];	// ���ߤΥѥ�����¸

	// �����
	int initialize();

	// ���ܸ����
	int analysis(char *s);

	// ����μ���
	int convert(char *s);
	int reconvert(char *s, int f, int m);

	// ���ڤ���ѹ�
	int resize(int n, int f);

	// ��������
	int get_candidacy(int n, char *s, int &c);

	// ����ʸ��ޤǤ�ʸ������Ĵ�٤�
	int get_segment(int n, int f=0);

	// ɽ��
	void print();

	char *get_read(int n);
	char *get_word(int n);
};
#endif	// __cplusplus


#endif	// __whiz_conf__
