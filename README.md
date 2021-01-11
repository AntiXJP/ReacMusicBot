# ReacMusicBot
## 说明
懒得编译的话可以直接运行ReacMusicBot那个文件的，支持64位Ubuntu20.04，其它Linux系统自测。macOS和Windows自己编译去。
## 编译环境
All
## 所需支持库安装
用到了tgbot-cpp，可转到https://github.com/reo7sp/tgbot-cpp 获取更多帮助。
```
sudo apt-get install g++ make binutils cmake libssl-dev libboost-system-dev zlib1g-dev libcurl4-openssl-dev 
git clone https://github.com/reo7sp/tgbot-cpp
cd tgbot-cpp
cmake .
make -j4
sudo make install
```
（此处基于Ubuntu/Debian。不同系统自行替换，macOS需要指定OpenSSL路径。）
## 编译方法
`g++ main.cpp -o main --std=c++14 -I/usr/local/include -lTgBot -lboost_system -lssl -lcrypto -lpthread`

(不同系统自行替换，macOS需要指定OpenSSL动态库路径。当然也可使用CMake)
## 注意事项
总共没一百行的测试代码有啥可注意的？
## 感谢
[tgbot-cpp](https://github.com/reo7sp/tgbot-cpp)
