#include <iostream>
#include <string>
#include <vector>
#include "Crowler.h"
#include "Searcher.h"


int main()
{
    // Тестирование

    Crowler crowler = Crowler();
    crowler.processStartPage();
    // std::string res = crowler.download("litres.ru");
    // std::cout << res << std::endl;
    // std::vector<std::string> words = crowler.getWords(res);
    // for (auto& i : words) {
    //     std::cout << i << std::endl;
    // }

    // std::string test = "<html>\n<head><title>301 Moved Moved Moved Permanently</title></head>\n<a href=\"yandex.ru\">yandex</a><a href=\"yandex2.ru\">yandex</a></html>";
    // std::vector<std::string> words = crowler.getWords(test);
    // for (auto& i : words) {
    //     std::cout << i << std::endl;
    // }
    // std::vector<WordPresence> pres = crowler.calculatePresences(words, "test.url");
    // for (auto& i : pres) {
    //     std::cout << i.frequency << std::endl;
    // }

    // std::vector<int> test = {1, 2, 3, 4, 5};
    // DbManager dbManager = DbManager();
    // unsigned int id = dbManager.insertWord("какжетак6");
    // std::cout << id << std::endl;

    // dbManager.insertWord("привет");
    // dbManager.insertWord("мир");
    // unsigned int id = dbManager.insertWord("пока3");
    // std::cout << id << std::endl;
    // dbManager.insertUrl("www.yandex.ru");
    // dbManager.insertUrl("www.google.com");
    // dbManager.insertUrl("www.yahoo.com");

    // unsigned int id = dbManager.getWordId("привет");
    // std::cout << id << std::endl;

    // std::string url = "www.yahoo.com";
    // std::string word = "мир";
    // unsigned short frequency = 1;
    // WordPresence presence = {word, url, frequency};
    // dbManager.insertPresence(presence);

    // std::vector<int> urlIds = dbManager.getUrlsIdsByWord("привет");
    // for (auto& i : urlIds) {
    //     std::cout << i << std::endl;
    // }

    // Searcher searcher = Searcher();
    // std::vector<std::string> words;
    // words.push_back("привет");
    // words.push_back("мир");
    // std::vector<int> urlIds = dbManager.getUrlsIdsByWords(words);
    // for (auto& i : urlIds) {
    //     std::cout << i << std::endl;
    // }
    // std::vector<std::string> urls = searcher.processSearchRequest(words);
    // for (auto& i : urls) {
    //     std::cout << i << std::endl;
    // }

    return 0;
}
