<html>
<head>
		<title>
            Cadastro
        </title>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
		<link rel="stylesheet" href="styles9.css"> 
	</head>



<?php

//Vamos definir as variáveis de data e hora
//para inserção no banco de dados

// Pega os dados do formulário
$cpf = $_POST["txtCpf"];
$nome = $_POST["txtNome"];
$sobrenome = $_POST["txtSobrenome"];
$cidade = $_POST["txtCidade"];
$estado = $_POST["txtEstado"];
$email = $_POST["txtEmail"];
$data = $_POST["txtData"];
$texto = $_POST["txtTexto"];
$hora = $_POST["txtHora"];

$sql = "INSERT INTO tb_candidatos (cpf, nome, sobrenome, cidade, estado, email, data, hora, texto, ver) 
VALUES ('$cpf', '$nome', '$sobrenome', '$cidade', '$estado',
'$email', '$data', '$hora', '$texto', 'on')";

//Agora é hora de contatar o mysql

$conexao = mysql_connect("localhost:3306", "root", "root")
or die ("Configuração de Banco de Dados Errada!");

//Substitua os valores acima caso não esteje de acordo com sua máquina
//Selecionando o banco de dados...

$db = mysql_select_db("bd_alistamento")
or die ("Banco de Dados Inexistente!");

//Inserindo os dados
//echo "SQL: $sql";
$sql = mysql_query($sql)
or die ("Houve erro na gravação dos dados, por favor, clique em voltar e verifique os campos obrigatórios!");

echo "<h1>Cadastro efetuado com sucesso!</h1>";
mysql_close($conexao);

?>

<a href="Comando.php">Ir para a tela de Comando</a>
<a href="Boas_Vindas.php">Voltar a tela inicial</a>
</html>