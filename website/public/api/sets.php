<?php

require_once __DIR__ . "/../../app/bootstrap.php";

chardev\Session::startBackendSession();

echo json_encode(chardev\backend\data\ItemSetListData::getInstance()->getSets(
	isset($_GET['a']) ? $_GET['a'] : "", 
	"", 
	isset($_GET['o']) ? $_GET['o'] : "", 
	isset($_GET['p']) ? (int)$_GET['p'] : 1
));