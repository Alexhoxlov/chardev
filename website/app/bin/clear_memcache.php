<?php

	require_once __DIR__ . '/../chardev/backend/cache/Cache.php';

	if( chardev\backend\cache\Cache::getInstance()->flush()) {
		echo "Flushed all data!";
	}
	else {
		echo "Error while flushing data";
	}