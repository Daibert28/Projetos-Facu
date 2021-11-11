<html>
<head>
		<title>
            Alterar
        </title>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
		<link rel="stylesheet" href="styles8.css"> 
	</head>


<?php

$conexao = mysql_connect("localhost:3306","root","root");
$db = mysql_select_db("bd_alistamento");
$id_novo = $_POST['id_novo'];
$cpf_novo = $_POST['cpf_novo'];
$nome_novo = $_POST['nome_novo'];
$sobrenome_novo= $_POST['sobrenome_novo'];
$cidade_novo = $_POST['cidade_novo'];
$estado_novo = $_POST['estado_novo'];
$email_novo  = $_POST['email_novo'];
$ver_novo = $_POST['ver_novo'];
$texto_novo = $_POST['texto_novo'];
$id = $_GET['id'];

$sql = "UPDATE tb_candidatos SET id='$id_novo', cpf='$cpf_novo', nome='$nome_novo'
,sobrenome='$sobrenome_novo',cidade='$cidade_novo',estado='$estado_novo'
,email='$email_novo', texto ='$texto_novo', ver='$ver_novo' WHERE id='$id'";

$resultado = mysql_query($sql)
or die ("Não foi possível realizar a consulta ao banco de dados");
echo "<h1>Dados alterados com sucesso!</h1>";

?>

<a href="Comando.php">Ir para a tela de Comando</a>
</html>

