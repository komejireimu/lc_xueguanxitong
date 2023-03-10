#pragma once

class TmpDat
{
public:
    std::string Num;
    std::string S_name;
    double Score;
};

class Student
{
public:
    bool check_file(std::string);
    int welcome();
    void welcome2();
    void start();
    std::string KEY = "key.ini";

private:
    bool check_isfile_empty(std::string);
    void re_gister(bool);
    void lo_ad();
    bool key_load();
    bool key_save();
    bool init();
    void cle_ar();
    bool save();
    int menu();
    int look_s();
    int add_s();
    int del_s();
    int modify_s();
    int find_s();
    void find_bynum();
    void find_byname();
    void find_during();
    int count_s();
    void show(bool, int);
    bool check(std::string);
    bool check_is_num(std::string &str);

    static bool by_num(TmpDat a, TmpDat b)
    {
        return a.Num < b.Num;
    }

    static bool by_name(TmpDat a, TmpDat b)
    {
        return (a.S_name.compare(b.S_name)) < 0;
    }

    static bool by_score(TmpDat a, TmpDat b)
    {
        return (a.Score != b.Score ? a.Score > b.Score : a.Score < b.Score);
    }

    std::string a, b;
    std::string ID, password, p_password;

    char weltxt1[1000] = "欢迎您使用本【学生信息管理系统】，请您在下方输入您的用户名和密码进行登录\n\n请输入您的用户名:  \n";
    char weltxt2[1000] = "请输入密码： \n";
    char weltxt3[1000] = "欢迎您首次使用本【学生信息管理系统】，请您创建一个用户名和密码来使用本系统。\n\n请按任意键继续...  \n";

    std::string tmp;
    std::string dat_name;
};