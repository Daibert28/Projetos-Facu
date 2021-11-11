<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
		<link rel="stylesheet" href="styles4.css"> 
	</head>

<?php

//Vamos precisar contar o MySQL novamente

$conexao = mysql_connect("localhost:3306","root","root");
$db = mysql_select_db("bd_alistamento");

//Agora é realizar a querie de busca no banco de dados

$sql = "SELECT * FROM tb_candidatos WHERE ver = 'on' ORDER BY id DESC LIMIT 15";

// Irá selecionar as últimas 15 notícias inseridas

// O curioso aqui, é que ele só irá selecionar os campos onde
// estiver o ver=on, isto foi discutido logo atrás, como um
// controle de notícias pelo webmaster
// Por padrão o MySQL colocou off, mas o webmaster terá que
// revisar as notícias e alterar o campo ver para as que quiser validar.

$resultado = mysql_query($sql)
or die ("Não foi possível realizar a consulta ao banco de dados");

// Agora iremos "pegar" cada campo da notícia
// e organizar no HTML

while ($linha=mysql_fetch_array($resultado)) {

$id = $linha["id"];
$cpf = $linha["cpf"];
$nome = $linha["nome"];
$sobrenome = $linha["sobrenome"];
$cidade = $linha["cidade"];
$estado = $linha["estado"];
$email = $linha["email"];
$data = $linha["data"];
$hora = $linha["hora"];
$texto = $linha["texto"];
$ver = $linha["ver"];

$novadata = substr($data,8,2) . "/" .substr($data,5,2) . "/" . substr($data,0,4);
$novahora = substr($hora,0,2) . "h" .substr($hora,3,2) . "min";


echo "<b><C&oacute;digo do Soldado</b>: $id";
echo "<br>";
echo "Autor: $cpf $nome $sobrenome - ($email)";
echo "<br>";
echo "Cidade: $cidade - Estado: $estado";
echo "<br>";
echo "Data: $novadata - Hor&aacute;rio: $novahora";
echo "<br>";
echo "Categoria: $texto";
echo "<br>";
echo "Validado pelo Webmaster: ";
if ($ver=on) { echo "Sim"; } else { echo "Não"; }
echo "<br><a href='Alterar.php?id=$id'>Alterar</a><br>";
echo "<br><a href='Excluir.php?id=$id'>Excluir</a><br>";
echo "<hr>";

}

?>
<a href="Comando.php">Ir para a tela de Comando</a>
</html>

