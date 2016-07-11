<?php
$a = strpos("jkldfjls", "jkdlsfj");
echo $a;

class Test{
	public $d;

	public function get_d(){
		return $this->d;
	}
}

$b = new Test();
$b->d = 10;
echo $b->get_d();
