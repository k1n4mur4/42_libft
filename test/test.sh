#!/bin/bash

# libft.aをコピー
cp ../libft.a .

# コンパイル
cc -Wall -Wextra -Werror -I../includes test.c libft.a -o test

# 実行
./test

#ファイル削除
rm test libft.a