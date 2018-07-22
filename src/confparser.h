// @Author Gao En Dong
// @Email 18941649210@163.com
#ifndef CONFPARSER_H
#define CONFPARSER_H

#include <vector>
using namespace std;
 
#define MAX_CONF_LEN  1024	//配置文件的最大长度
#define CONF_FILE     "spider.conf"//配置文件名

//配置文件结构体
typedef struct Config {
    int              max_job_num;//最大的工作数量
    char            *seeds;//URL
    char            *include_prefixes; 
    char            *exclude_prefixes; 
    char            *logfile; //日志
    int              log_level;//日志级别
    int              max_depth;//url最大深度
    int              make_hostdir;
    int              stat_interval;

    char *           module_path;//模块路径
    vector<char *>   modules;//模块名称
    vector<char *>   accept_types;
};


extern Config * initconfig();//初始化，给出参数的默认值


extern void loadconfig(Config *conf);//读取配置文件，更新参数的数值


#endif
