function readFile($filename){
$user = getCurrentUser();

//resolve file if its a symbolic link
if(is_link($filename)){
$filename = readlink($filename);
}

if(fileowner($filename) == $user){
echo file_get_contents($realFile);
return;
}
else{
echo 'Access denied';
return false;
}
}
————————————————
版权声明：本文为CSDN博主「guilanl」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/guilanl/article/details/71440619