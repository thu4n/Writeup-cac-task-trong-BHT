# 10 BÀI LƯU ĐỒ THUẬT TOÁN
**Deadline đầu tiên mình nhận được khi tham gia vào Ban Học Tập của Đoàn khoa MMT&TT.**
## BÀI 1. 
![image](https://user-images.githubusercontent.com/53972592/139857911-f9d823a5-771c-4de4-8b30-6dff7d8a158d.png)

Đây là một bài mà mình nhận định là khá đơn giản. Dù không nêu rõ nhưng mình hiểu ý của người ra đề là chỉ được sử dụng phép nhân trong lưu đồ. Dưới đây là bài làm của mình:
![image](https://user-images.githubusercontent.com/53972592/139859749-cd0182c0-9ff9-407d-adb9-28360eda9539.png)

Đầu tiên, cho nhập vào biến `x`. Tiếp theo, mình gán giá trị bình phương của `x` vào một biến mới `x2`. Tương tự, mình lại tiếp tục gán trị bình phương của `x2` vào biến `x4` để được **x mũ 4**. Cuối cùng, để có giá trị của **x mũ 11**, mình tạo biến `x11` và gán cho nó giá trị từ biểu thức `x4*x4*x2*x`. Như vậy, sử dụng phép nhân số mũ có cùng cơ số đã giúp mình tìm được giá trị của **x mũ 11** sau **5** phép nhân.

**English translation**:

First, a variable `x` is inputted. Next, I assign the value of the square of `x` to a new variable `x2`. Similarly, I continue to assign the value of the square of `x2` to the variable `x4` so as to have **x to the power of 4**. Finally, I create a variable named `x11` and assign to it the value of `x4*x4*x2*x`. So, by multiplying exponents with the same base, I am able to find the value of **x to the power of 11** after **5** multiplications.

## BÀI 2.
![image](https://user-images.githubusercontent.com/53972592/139879061-c0e5f4e9-38b1-4c75-a32a-89b6e662fbb7.png)

Dạng bài này khi đọc vô thì thứ đầu tiên mình nghĩ tới là dùng vòng lặp và cứ thế, mình triển khai theo ý tưởng đó ra lưu đồ sau đây:
![image](https://user-images.githubusercontent.com/53972592/139880899-2728ca6f-13e8-4d5b-8f38-4e100614df4c.png)

Đầu tiên, cho nhập vào biến `n`. Tiếp theo, mình tạo một biến `sum` với giá trị bằng 0 để chứa giá trị của cái tổng mà mình đang tìm. Sau đó, mình tạo một vòng lặp với điều kiện lặp là `n/10 > 0`, mình sẽ giải thích điều kiện này trong lát nữa. Nếu điều kiện được thỏa mãn, mình thực hiện tiếp 2 câu lệnh là `sum += n%10` và `n /= 10`. Khi **chia lấy dư** một số nguyên bất kì có ít nhất 2 chữ số cho 10 trong C++, ta được thương là chữ số cuối cùng của số nguyên đó. Vậy với câu lệnh thứ nhất, chữ số cuối cùng trong `n` được cộng dồn vào `sum` với mỗi lần lặp. Khi **chia** một số nguyên bất kì có ít nhất 2 chữ số cho 10 trong C++, thương là số nguyên đó nhưng mất đi 1 chữ số ở hàng đơn vị. Vậy với câu lệnh thứ hai, `n` sẽ mất đi 1 chữ số ngoài cùng để trong các lần lặp tiếp theo, những chữ số còn lại của `n` sẽ được cộng vào `sum`. Vòng lặp sẽ được thực hiện tới khi `n` còn 1 chữ số, khi đó, nếu lấy `n` chia cho 10 sẽ thu được kết quả là 0. Do đó, điều kiện lặp không còn được thỏa mãn nữa và ta chuyển sang cộng chữ số còn sót lại của `n` vào `sum`. Từ đó, ta thu được `sum` là tổng của các chữ số trong `n`.
