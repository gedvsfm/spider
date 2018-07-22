// @Author Gao En Dong
// @Email 18941649210@163.com
#ifndef CONFPARSER_H
#define CONFPARSER_H

#include <vector>
using namespace std;
 
#define MAX_CONF_LEN  1024	//�����ļ�����󳤶�
#define CONF_FILE     "spider.conf"//�����ļ���

//�����ļ��ṹ��
typedef struct Config {
    int              max_job_num;//���Ĺ�������
    char            *seeds;//URL
    char            *include_prefixes; 
    char            *exclude_prefixes; 
    char            *logfile; //��־
    int              log_level;//��־����
    int              max_depth;//url������
    int              make_hostdir;
    int              stat_interval;

    char *           module_path;//ģ��·��
    vector<char *>   modules;//ģ������
    vector<char *>   accept_types;
};


extern Config * initconfig();//��ʼ��������������Ĭ��ֵ


extern void loadconfig(Config *conf);//��ȡ�����ļ������²�������ֵ


#endif
