<html>
<head>
		<title>
            Excluir
        </title>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
		<link rel="stylesheet" href="styles6.css"> 
	</head>

<?php

$conexao = mysql_connect("localhost:3306","root","root");
$db = mysql_select_db("bd_alistamento");
$id = $_GET['id'];
$sql = "DELETE FROM tb_candidatos WHERE id='$id'";
$resultado = mysql_query($sql)
or die ("Não foi possível realizar a exclusão dos dados.");
echo "<h1>O cadastro foi exclu&iacute;do com &ecirc;xito!</h1>";
mysql_close($conexao);

?>
<a href="Comando.php">Ir para a tela de Comando</a>
</html>

