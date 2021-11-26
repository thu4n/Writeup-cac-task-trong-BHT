# Exercises from 1 to 10
## Overall review:
Most of the exercises were easy to handle. However, there were two exercises which I had a very hard time solving, "Tam Giac" and "Xep Cho Ngoi". I did manage to solve them in time but a lot of efforts were made for that to happen.
## [Ex.01 - "Xep Gach":](Code-Files/01-XepGach.cpp)
### Problem:
Patlu and Motu work at a construction site, they have to move **N** number of bricks to a different place. They decide to play a game to see who will be the one to move the last brick. They base on a simple rule: at turn **i**, when Patlu moves **i** number of bricks, Motu has to move **twice** that number. They have a total of N bricks, you need to help them find out the one who will move the last brick.

Restraint: 1 <= N <= 10000
### My solution:
With each loop, I will first check if `n` is smaller or equal to 0 after subtracting it by `i` value. If the condition is satisfied, I will know that Patlu is the last one to move the brick. Otherwise, I contine to subtract `n` by `2*i` and check if `n` is equal or smaller than 0 again to know whether it is Motu or not. Basically, I just use a while loop to subtract the number of bricks in the order of Patlu first and Motu second.
## [Ex.02 - "Chuyen Dong":](Code-Files/02-ChuyenDong.cpp)
### Problem:
Chú voi con ở Bản Đôn dự định đến thăm nhà một người bạn. Nhà của chú voi con ở vị trí 0 và nhà bạn chú ở tọa độ x (x>0). Mỗi bước chú có thể di chuyển 1,2,3,4 hoặc 5 vị trí về phía trước. Tìm số bước chân nhỏ nhất để chú voi có thể đế nhà bạn.
The little elephant in Bản Đôn wants to pay his friend a visit.
