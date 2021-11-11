<html>
<head>
		<title>
            Alterar
        </title>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
		<link rel="stylesheet" href="styles7.css"> 
	</head>

<?php

$conexao = mysql_connect("localhost:3306","root","root");
$db = mysql_select_db("bd_alistamento");
$id = $_GET['id'];
$sql = "SELECT * FROM tb_candidatos WHERE id='$id'";
$resultado = mysql_query($sql)
or die ("Não foi possível realizar a consulta ao banco de dados");
$num = mysql_num_rows($resultado);

while ($linha=mysql_fetch_array($resultado)) {
	$id = $linha["id"];
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
	
	echo "<h1>Alterar Cadastro...</h1>";
	echo "<hr><br>";
	echo "<form action='Alterar_bd.php?id=$id' method='post'>";
	echo "Código da Notícia: <input name='id_novo' type='text' value='$id' size=20><br>";
	echo "Data: $novadata<br>";
	echo "Hora: $novahora<br>";
	echo "Nome:<input name='nome_novo' type='text' value='$nome' size=30> *<br>";
	echo "Sobrenome:<input name='sobrenome_novo' type='text' value='$sobrenome' size=30> *<br>";
	echo "Cidade:<input name='cidade_novo' type='text' value='$cidade' size=30> *<br>";
	echo "Estado:<i>(Exemplo: SP, RS, BA)</i><input name='estado_novo' type='text'
	value='$estado' size=5> *<br>";
	echo "Email: <i>(Exemplo: feitosac@yahoo.com)</i><input name='email_novo' type='text'
	value='$email' size=30><br><br>";
	echo "Texto:<textarea name='texto_novo' rows=10 cols=30>$texto</textarea> *<br>";
	echo "Disponibilizar? (on ou off): <input name='ver_novo' type='text' value='$ver' size=5><br>";
	echo "<input type='submit' value='Alterar'>";
	echo "</form>";
	echo "<br><hr>";
}
mysql_close($conexao);

?>
<a href="Comando.php">Ir para a tela de Comando</a>
</html>
