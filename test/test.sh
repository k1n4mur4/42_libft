#!/bin/bash
set -euo pipefail

# libft.aをコピー
cp ../libft.a .

# コンパイル
cc -Wall -Wextra -Werror -I../includes test.c libft.a -o test

# 機能テストを1回実行
./test

# メモリリークチェック（macOSのleaks優先、失敗時はvalgrindを試す）
if command -v leaks >/dev/null 2>&1; then
	if ! leaks -atExit -- ./test; then
		echo "leaks failed (permission/SIP?)."
	fi
elif command -v valgrind >/dev/null 2>&1; then
	valgrind --leak-check=full --show-leak-kinds=all \
		--errors-for-leak-kinds=all --error-exitcode=1 ./test
else
	echo "Leak checker not found (leaks/valgrind). Skipping leak test."
fi

# ファイル削除
rm -f test libft.a
