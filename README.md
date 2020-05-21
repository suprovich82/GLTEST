# GLTEST
------------------
Task 1. Stairway.c
------------------
    ./Stairway N K

    Where N - number of stairs in stairway, K - number of stairs that Giant will skips by taking a step.

    The "K" parameter is the number of steps that the Giant skips by taking a step. Become the next "K + 1". 

-------------------
Task 2. Bridge.c
-------------------
    ./bridge N D

    Where N - the total number of spans the Magical Bridge has, D - the distance between the spans.
    
-------------------
Task 3. list.c
-------------------

    ./list -la <path_to_folder>

Requirements:

1. You need to install libbsd-dev

if you are using ubuntu

    sudo apt-get install  libbsd-dev

if you are using centOS

    sudo yum install  libbsd-devel

if you are using Amazon Linux 2

    wget http://dl.fedoraproject.org/pub/epel/6/x86_64/epel-release-6-8.noarch.rpm
    wget http://rpms.famillecollet.com/enterprise/remi-release-6.rpm
    sudo rpm -Uvh remi-release-6*.rpm epel-release-6*.rpm
    yum install libbsd-devel

2. Use -lbsd option to compile

    gcc list.c -o list -lbsd
    
