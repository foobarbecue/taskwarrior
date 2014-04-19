////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2014, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// This file contains all the strings that should be localized.  If a string is
// *not* in this file, then either:
//   (a) it should not be localized, or
//   (b) you have found a bug - please report it
//
// Strings that should be localized:
//   - text output that the user sees
//
// Strings that should NOT be localized:
//   - .taskrc configuration variable names
//   - command names
//   - extension function names
//   - certain literals associated with parsing
//   - debug strings
//   - attribute names
//   - modifier names
//   - logical operators (and, or, xor)
//
// Rules:
//   - Localized strings should not in general  contain leading or trailing
//     white space, including \n, thus allowing the code to compose strings.
//   - Retain the tense of the original string.
//   - Retain the same degree of verbosity of the original string.
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// Translators:
//   1. Copy this file (eng-USA.h) to a new file with the target locale as the
//      file name.  Using German as an example, do this:
//
//        cp eng-USA.h de-DE.h
//
//   2. Modify all the strings below.
//        i.e. change "Unknown error." to "Unbekannter Fehler.".
//
//   3. Add your new translation to the task.git/src/i18n.h file, if necessary,
//      by inserting:
//
//        #elif PACKAGE_LANGUAGE == LANGUAGE_DEU_DEU
//        #include <de-DE.h>
//
//   4. Add your new language to task.git/CMakeLists.txt, making sure that
//      number is unique:
//
//        set (LANGUAGE_DEU_DEU 3)
//
//   5. Add your new language to task.git/cmake.h.in:
//
//        #define LANGUAGE_DEU_DEU ${LANGUAGE_DEU_DEU}
//
//   6. Build your localized Taskwarrior with these commands:
//
//      cd task.git
//      cmake -D LANGUAGE=3 .
//      make
//
//   7. Submit your translation to support@taskwarrior.org, where it will be
//      shared with others.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// Note that for English, the following two lines are not displayed.  For all
// other localizations, these lines will appear in the output of the 'version'
// and 'diagnostics' commands.
//
// DO NOT include a copyright in the translation.
//
#define STRING_LOCALIZATION_DESC     "Tradução em Português"
#define STRING_LOCALIZATION_AUTHOR   "Traduzido para Português por Renato Alves."

// A3
#define STRING_A3_ALTERNATE_RC       "Usando o ficheiro .taskrc alternativo {1}"
#define STRING_A3_ALTERNATE_DATA     "Usando data.location alternativa {1}"
#define STRING_A3_OVERRIDE_RC        "Alteração de configuração rc.{1}:{2}"
#define STRING_A3_OVERRIDE_PROBLEM   "Problema com a alteração: {1}"
#define STRING_A3_UNKNOWN_ATTMOD     "Erro: modificador de atributo não reconhecido '{1}'."
#define STRING_A3_MISMATCHED_PARENS  "Erro de não correspondência de parentesis na expressão"
#define STRING_A3_PATTERN_GARBAGE    "Caracter(es) não reconhecidos no fim da expressão."
#define STRING_A3_MALFORMED_PATTERN  "Expressão malformada."
#define STRING_A3_MALFORMED_ID       "ID malformado."
#define STRING_A3_MALFORMED_UUID     "UUID malformado."
#define STRING_A3_ID_AFTER_HYPHEN    "ID não reconhecido após o hífen."
#define STRING_A3_RANGE_INVERTED     "Intervalo invertido 'alta-baixa' em vez de 'baixa-alta'"
#define STRING_A3_UUID_AFTER_COMMA   "UUID não reconhecido após a vírgula."
#define STRING_A3_ZERO_ID            "'{1}' não é um ID válido."

// Color
#define STRING_COLOR_UNRECOGNIZED    "A cor '{1}' não é reconhecida."

// columns/Col*
#define STRING_COLUMN_BAD_NAME       "Nome de coluna '{1}' não reconhecido."
#define STRING_COLUMN_BAD_FORMAT     "Formato de coluna '{1}.{2}' não reconhecido"
#define STRING_COLUMN_LABEL_TASKS    "Tarefas"
#define STRING_COLUMN_LABEL_DEP      "Depende"
#define STRING_COLUMN_LABEL_DEP_S    "Dep"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_DESC     "Descrição"
#define STRING_COLUMN_LABEL_DUE      "Vence"
#define STRING_COLUMN_LABEL_END      "Fim"
#define STRING_COLUMN_LABEL_ENTERED  "Criada"
#define STRING_COLUMN_LABEL_COUNT    "Contagem"
#define STRING_COLUMN_LABEL_COMPLETE "Concluída"
#define STRING_COLUMN_LABEL_MOD      "Modificada"
#define STRING_COLUMN_LABEL_ADDED    "Adicionada"
#define STRING_COLUMN_LABEL_AGE      "Idade"
#define STRING_COLUMN_LABEL_ID       "ID"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_PRI      "Pri"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_PRIORITY "Prioridade"
#define STRING_COLUMN_LABEL_PROJECT  "Projeto"
#define STRING_COLUMN_LABEL_UNTIL    "Até"
#define STRING_COLUMN_LABEL_WAIT     "Adiada"
#define STRING_COLUMN_LABEL_WAITING  "Adiada até"
#define STRING_COLUMN_LABEL_RECUR    "Period"
#define STRING_COLUMN_LABEL_RECUR_L  "Periodicidade"
#define STRING_COLUMN_LABEL_START    "Início"
#define STRING_COLUMN_LABEL_STARTED  "Iniciada"
#define STRING_COLUMN_LABEL_ACTIVE   "A"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_STATUS   "Estado"
#define STRING_COLUMN_LABEL_STAT     "Es"
#define STRING_COLUMN_LABEL_STAT_PE  "Pendentes"
#define STRING_COLUMN_LABEL_STAT_CO  "Concluídas"
#define STRING_COLUMN_LABEL_STAT_DE  "Eliminadas"
#define STRING_COLUMN_LABEL_STAT_WA  "Adiadas"
// Seria preferivel "Periódicas" mas faz conflito na primeira letra com "Pendentes"
#define STRING_COLUMN_LABEL_STAT_RE  "Recorrentes"
#define STRING_COLUMN_LABEL_STAT_P   "P"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_STAT_C   "C"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_STAT_D   "E"
#define STRING_COLUMN_LABEL_STAT_W   "A"
#define STRING_COLUMN_LABEL_STAT_R   "R"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_TAGS     "Marcas"
#define STRING_COLUMN_LABEL_TAG      "Marca"
#define STRING_COLUMN_LABEL_UUID     "UUID"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_URGENCY  "Urgência"
#define STRING_COLUMN_LABEL_NAME     "Nome"
#define STRING_COLUMN_LABEL_VALUE    "Valor"
#define STRING_COLUMN_LABEL_MASK     "Máscara"
#define STRING_COLUMN_LABEL_MASK_IDX "Índice de Máscara"
#define STRING_COLUMN_LABEL_PARENT   "Tarefa mãe"
#define STRING_COLUMN_LABEL_DATE     "Data"
#define STRING_COLUMN_LABEL_COLUMN   "Colunas"
#define STRING_COLUMN_LABEL_STYLES   "Formatos Suportados"
#define STRING_COLUMN_LABEL_EXAMPLES "Exemplo"
#define STRING_COLUMN_LABEL_SCHED    "Agendado"
#define STRING_COLUMN_LABEL_UDA      "Nome"
#define STRING_COLUMN_LABEL_TYPE     "Tipo"
#define STRING_COLUMN_LABEL_LABEL    "Rótulo"
#define STRING_COLUMN_LABEL_DEFAULT  "Por omissão"
#define STRING_COLUMN_LABEL_VALUES   "Valores Permitidos"
#define STRING_COLUMN_LABEL_UDACOUNT "Contagem de Uso"
#define STRING_COLUMN_LABEL_ORPHAN   "UDA Orfão"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "casa @contas próxima"
#define STRING_COLUMN_EXAMPLES_PROJ  "casa.jardim"
#define STRING_COLUMN_EXAMPLES_PAR   "casa"
#define STRING_COLUMN_EXAMPLES_IND   "  casa.jardim"
#define STRING_COLUMN_EXAMPLES_DESC  "Mover as roupas para a prateleira mais baixa"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Imediatamente antes do almoço"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Se vais jogar no torneio esta tarde"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Antes de escrever para casa"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Se não vais cortar o cabelo"

// commands/Cmd*
#define STRING_CMD_CONFLICT          "Conflito entre relatório personalizado '{1}' e um comando interno do taskwarrior."
#define STRING_CMD_VERSION_USAGE     "Exibe o número de versão do taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Exibe apenas o número de versão do taskwarrior"
#define STRING_CMD_VERSION_MIT       "O Taskwarrior pode ser copiado apenas ao abrigo dos termos da licença MIT, que pode ser encontrada junto do código fonte."
#define STRING_CMD_VERSION_DOCS      "A documentação do taskwarrior pode ser encontrada usando os comandos 'man task', 'man taskrc', 'man task-tutorial', 'man task-color', 'man task-sync', 'man task-faq' ou em http://taskwarrior.org"
#define STRING_CMD_VERSION_BUILT     "{1} {2} construido para "
#define STRING_CMD_VERSION_UNKNOWN   "desconhecido"
#define STRING_CMD_VERSION_COPY      "Copyright (C) 2006 - 2014 P. Beckingham, F. Hernandez."  // |por-PRT|==|eng-USA|
#define STRING_CMD_LOGO_USAGE        "Exibe o logotipo do Taskwarrior"
#define STRING_CMD_LOGO_COLOR_REQ    "O comando logo requer que o suporte de cor seja ativado."
#define STRING_CMD_EXEC_USAGE        "Executa comandos e scripts externos"
#define STRING_CMD_URGENCY_USAGE     "Exibe o valor de urgência de uma tarefa"
#define STRING_CMD_URGENCY_RESULT    "Tarefa {1} urgência {2}"
#define STRING_CMD_ADD_USAGE         "Adiciona uma nova tarefa"
#define STRING_CMD_ADD_FEEDBACK      "Criada a tarefa {1}."
#define STRING_CMD_ADD_BAD_ATTRIBUTE "Atributo desconhecido '{1}'."
#define STRING_CMD_LOG_USAGE         "Adiciona uma nova tarefa que já está concluída"
#define STRING_CMD_LOG_NO_RECUR      "Não pode usar o comando 'log' para tarefas recorrentes."
#define STRING_CMD_LOG_NO_WAITING    "Não pode usar o comando 'log' para tarefas adiadas."
#define STRING_CMD_LOG_LOGGED        "Tarefa registada."
#define STRING_CMD_IDS_USAGE_RANGE   "Exibe como intervalo, os IDs das tarefas correspondentes"
#define STRING_CMD_IDS_USAGE_LIST    "Exibe em formato de lista, os IDs das tarefas correspondentes"
#define STRING_CMD_IDS_USAGE_ZSH     "Exibe os IDs e descrições das tarefas correspondentes"
#define STRING_CMD_UDAS_USAGE        "Exibe os detalhes de todas os UDA definidos"
#define STRING_CMD_UDAS_COMPL_USAGE  "Exibe os UDAs definidos para fins de terminação automática"
#define STRING_CMD_UUIDS_USAGE_RANGE "Exibe como lista separada por vírgulas, os UUIDs das tarefas correspondentes"
#define STRING_CMD_UUIDS_USAGE_LIST  "Exibe como lista, os UUIDs das tarefas correspondentes"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Exibe os UUIDs e descrições das tarefas correspondentes"
#define STRING_CMD_EXPORT_USAGE      "Exporta tarefas para o formato JSON"
#define STRING_CMD_INFO_USAGE        "Exibe todos os dados e meta-dados"
#define STRING_CMD_INFO_BLOCKED      "Esta tarefa está bloqueada por"
#define STRING_CMD_INFO_BLOCKING     "Esta tarefa bloqueia"
#define STRING_CMD_INFO_UNTIL        "Até"
#define STRING_CMD_INFO_MODIFICATION "Modificação"
#define STRING_CMD_INFO_TOTAL_ACTIVE "Tempo total ativa"
#define STRING_CMD_INFO_MODIFIED     "Última modificação"
#define STRING_CMD_UNDO_USAGE        "Reverte a mais recente modificação a uma tarefa"
#define STRING_CMD_UNDO_MODS         "O comando undo não permite outras modificações simultâneas."
#define STRING_CMD_STATS_USAGE       "Exibe estatísticas da base de dados de tarefas"
#define STRING_CMD_STATS_CATEGORY    "Categoria"
#define STRING_CMD_STATS_DATA        "Dados"
#define STRING_CMD_STATS_TOTAL       "Total"  // |por-PRT|==|eng-USA|
#define STRING_CMD_STATS_ANNOTATIONS "Anotações"
#define STRING_CMD_STATS_UNIQUE_TAGS "Marcas Únicas"
#define STRING_CMD_STATS_PROJECTS    "Projetos"
#define STRING_CMD_STATS_DATA_SIZE   "Tamanho dos dados"
#define STRING_CMD_STATS_UNDO_TXNS   "Operações a desfazer - 'undo'"
#define STRING_CMD_STATS_BACKLOG     "Operações a sincronizar - 'sync'"
#define STRING_CMD_STATS_TAGGED      "Tarefas marcadas"
#define STRING_CMD_STATS_OLDEST      "Tarefa mais antiga"
#define STRING_CMD_STATS_NEWEST      "Tarefa mais recente"
#define STRING_CMD_STATS_USED_FOR    "Task usado durante"
#define STRING_CMD_STATS_ADD_EVERY   "Tarefa adicionada cada"
#define STRING_CMD_STATS_COMP_EVERY  "Tarefa concluída cada"
#define STRING_CMD_STATS_DEL_EVERY   "Tarefa eliminada cada"
#define STRING_CMD_STATS_AVG_PEND    "Tempo médio pendente"
#define STRING_CMD_STATS_DESC_LEN    "Tamanho médio de descrição"
#define STRING_CMD_STATS_CHARS       "{1} caracteres"
#define STRING_CMD_STATS_LAST_SYNC   "Última sincronização com servidor"
#define STRING_CMD_STATS_BLOCKED     "Tarefas bloqueadas"
#define STRING_CMD_STATS_BLOCKING    "Tarefas a bloquear"
#define STRING_CMD_REPORTS_USAGE     "Lista todos os relatórios suportados"
#define STRING_CMD_REPORTS_REPORT    "Relatório"
#define STRING_CMD_REPORTS_DESC      "Descrição"
#define STRING_CMD_REPORTS_SUMMARY   "{1} relatórios"
#define STRING_CMD_TAGS_USAGE        "Exibe uma lista de todas as marcas em uso"
#define STRING_CMD_COMTAGS_USAGE     "Exibe apenas a lista de todas as marcas em uso, para fins de terminação automática"
#define STRING_CMD_TAGS_SINGLE       "1 marca"
#define STRING_CMD_TAGS_PLURAL       "{1} marcas"
#define STRING_CMD_TAGS_NO_TAGS      "Sem marcas."
#define STRING_CMD_HISTORY_USAGE_M   "Exibe um relatório mensal do histórico de tarefas"
#define STRING_CMD_HISTORY_YEAR      "Ano"
#define STRING_CMD_HISTORY_MONTH     "Mês"
#define STRING_CMD_HISTORY_ADDED     "Adicionada"
#define STRING_CMD_HISTORY_COMP      "Concluída"
#define STRING_CMD_HISTORY_DEL       "Eliminada"
#define STRING_CMD_HISTORY_NET       "Saldo"
#define STRING_CMD_HISTORY_USAGE_A   "Exibe um relatório anual do histórico de tarefas"
#define STRING_CMD_HISTORY_AVERAGE   "Média"
#define STRING_CMD_HISTORY_LEGEND    "Legenda: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legenda: + adicionada, X concluída, - eliminada"
#define STRING_CMD_GHISTORY_USAGE_M  "Exibe um relatório gráfico mensal do histórico de tarefas"
#define STRING_CMD_GHISTORY_USAGE_A  "Exibe um relatório gráfico anual do histórico de tarefas"
#define STRING_CMD_GHISTORY_YEAR     "Ano"
#define STRING_CMD_GHISTORY_MONTH    "Mês"
#define STRING_CMD_GHISTORY_NUMBER   "Número de Adicionadas/Concluídas/Eliminadas"

#define STRING_CMD_DONE_USAGE        "Concluí a tarefa indicada"
#define STRING_CMD_DONE_CONFIRM      "Concluír tarefa {1} '{2}'?"
#define STRING_CMD_DONE_TASK         "Concluída tarefa {1} '{2}'."
#define STRING_CMD_DONE_NO           "Tarefa não concluída."
#define STRING_CMD_DONE_NOTPEND      "Tarefa {1} '{2}' não está pendente nem em espera."
#define STRING_CMD_DONE_1            "Concluída {1} tarefa."
#define STRING_CMD_DONE_N            "Concluída {1} tarefas."

#define STRING_CMD_PROJECTS_USAGE    "Exibe todos os nomes de projeto em uso"
#define STRING_CMD_PROJECTS_USAGE_2  "Exibe apenas uma lista de todos os nomes de projeto em uso"
#define STRING_CMD_PROJECTS_NO       "Sem projetos."
#define STRING_CMD_PROJECTS_PRI_N    "Pri:Nenhuma"
#define STRING_CMD_PROJECTS_PRI_H    "Pri:A"
#define STRING_CMD_PROJECTS_PRI_M    "Pri:M"  // |por-PRT|==|eng-USA|
#define STRING_CMD_PROJECTS_PRI_L    "Pri:B"
#define STRING_CMD_PROJECTS_NONE     "(nenhum)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} projeto"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} projetos"
#define STRING_CMD_PROJECTS_TASK     "({1} tarefa)"
#define STRING_CMD_PROJECTS_TASKS    "({1} tarefas)"
#define STRING_CMD_SUMMARY_USAGE     "Exibe um relatório do estado das tarefas por projeto"
#define STRING_CMD_SUMMARY_PROJECT   "Projeto"
#define STRING_CMD_SUMMARY_REMAINING "Por concluír"
#define STRING_CMD_SUMMARY_AVG_AGE   "Idade méd"
#define STRING_CMD_SUMMARY_COMPLETE  "Completo"
#define STRING_CMD_SUMMARY_NONE      "(nenhum)"
#define STRING_CMD_COUNT_USAGE       "Conta tarefas correspondentes"
#define STRING_CMD_GET_USAGE         "Método de acesso ao DOM"
#define STRING_CMD_GET_NO_DOM        "Referência DOM não especificada."

#define STRING_CMD_UDAS_NO           "Nenhum UDA definido."
#define STRING_CMD_UDAS_SUMMARY      "{1} UDA definido"
#define STRING_CMD_UDAS_SUMMARY2     "{1} UDAs definidos"
#define STRING_CMD_UDAS_ORPHAN       "{1} UDA orfão"
#define STRING_CMD_UDAS_ORPHANS      "{1} UDAs orfãos"

#define STRING_CMD_DELETE_USAGE      "Elimina a tarefa indicada"
#define STRING_CMD_DELETE_CONFIRM    "Eliminar permanentemente a tarefa {1} '{2}'?"
#define STRING_CMD_DELETE_TASK       "A eliminar tarefa {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "A eliminar tarefa recorrente {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "Esta é uma tarefa recorrente. Deseja eliminar todas as ocorrências pendentes da mesma tarefa?"
#define STRING_CMD_DELETE_NO         "Tarefa não eliminada."
#define STRING_CMD_DELETE_NOT_DEL    "Tarefa {1} '{2}' não é eliminável."
#define STRING_CMD_DELETE_1          "Eliminada {1} tarefa."
#define STRING_CMD_DELETE_N          "Eliminadas {1} tarefas."

#define STRING_CMD_DUPLICATE_USAGE   "Duplica as tarefas especificadas"
#define STRING_CMD_DUPLICATE_REC     "Nota: A tarefa {1} era uma tarefa mãe periódica. A tarefa duplicada também."
#define STRING_CMD_DUPLICATE_NON_REC "Nota: A tarefa {1} era uma tarefa periódica. A tarefa duplicada não é."
#define STRING_CMD_DUPLICATE_CONFIRM "Duplicar tarefa {1} '{2}'?"
#define STRING_CMD_DUPLICATE_TASK    "Tarefa duplicada {1} '{2}'."
#define STRING_CMD_DUPLICATE_NO      "Tarefa não duplicada."
#define STRING_CMD_DUPLICATE_1       "Duplicada {1} tarefa."
#define STRING_CMD_DUPLICATE_N       "Duplicadas {1} tarefas."

#define STRING_CMD_START_USAGE       "Assinala a tarefa especificada como iniciada"
#define STRING_CMD_START_NO          "Tarefa não iniciada."
#define STRING_CMD_START_ALREADY     "Tarefa {1} '{2}' já iniciada."
#define STRING_CMD_START_TASK        "A iniciar tarefa {1} '{2}'."
#define STRING_CMD_START_CONFIRM     "Iniciar tarefa {1} '{2}'?"
#define STRING_CMD_START_1           "Iniciada {1} tarefa."
#define STRING_CMD_START_N           "Iniciadas {1} tarefas."

#define STRING_CMD_STOP_USAGE        "Remove o estado de iniciado 'start' de uma tarefa"
#define STRING_CMD_STOP_NO           "Tarefa não parada."
#define STRING_CMD_STOP_ALREADY      "Tarefa {1} '{2}' não iniciada."
#define STRING_CMD_STOP_TASK         "A parar tarefa {1} '{2}'."
#define STRING_CMD_STOP_CONFIRM      "Parar tarefa {1} '{2}'?"
#define STRING_CMD_STOP_1            "Parada {1} tarefa."
#define STRING_CMD_STOP_N            "Paradas {1} tarefas."

#define STRING_CMD_APPEND_USAGE      "Acrescenta texto à descrição de uma tarefa existente"
#define STRING_CMD_APPEND_1          "Acrescentada {1} tarefa."
#define STRING_CMD_APPEND_N          "Acrescentadas {1} tarefas."
#define STRING_CMD_APPEND_TASK       "A acrescentar à tarefa {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "A acrescentar à tarefa recorrente {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "Esta é uma tarefa recorrente. Deseja acrescentar a todas as ocorrências pendentes desta tarefa?"
#define STRING_CMD_APPEND_CONFIRM    "Acrescentado à tarefa {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Tarefa não acrescentada."

#define STRING_CMD_PREPEND_USAGE     "Antepõe texto à descrição de uma tarefa existente"
#define STRING_CMD_PREPEND_1         "Anteposta {1} tarefa."
#define STRING_CMD_PREPEND_N         "Antepostas {1} tarefas."
#define STRING_CMD_PREPEND_TASK      "Antepor à tarefa {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Antepor à tarefa recorrente {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "Esta é uma tarefa recorrente. Deseja antepor a todas as ocorrências pendentes desta tarefa?"
#define STRING_CMD_PREPEND_CONFIRM   "Antepor à tarefa {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Tarefa não anteposta."

#define STRING_CMD_ANNO_USAGE        "Adiciona uma anotação a uma tarefa existente"
#define STRING_CMD_ANNO_CONFIRM      "Anotar tarefa {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "A anotar tarefa {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "A anotar tarefa recorrente {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "Esta é uma tarefa recorrente. Deseja anotar em todas as ocorrências pendentes desta tarefa?"
#define STRING_CMD_ANNO_NO           "Tarefa não anotada."
#define STRING_CMD_ANNO_1            "Anotada {1} tarefa."
#define STRING_CMD_ANNO_N            "Anotadas {1} tarefas."

#define STRING_CMD_COLUMNS_USAGE     "Todas as colunas suportadas e os estilos de formatação"
#define STRING_CMD_COLUMNS_NOTE      "* Significa formato por defeito, e por consequência opcional. Por exemplo 'due' e 'due.formatted' são equivalentes."
#define STRING_CMD_COLUMNS_USAGE2    "Exibe apenas a lista de colunas suportadas"
#define STRING_CMD_COLUMNS_ARGS      "Pode apenas especificar uma frase para procura."

#define STRING_CMD_DENO_USAGE        "Elimina uma anotação"
#define STRING_CMD_DENO_WORDS        "É necessário fornecer uma expressão para anotação."
#define STRING_CMD_DENO_NONE         "A tarefa especificada não tem anotações que possam ser eliminadas."
#define STRING_CMD_DENO_CONFIRM      "Remover anotação da tarefa {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Foi encontrada e removida a anotação '{1}'."
#define STRING_CMD_DENO_NOMATCH      "Não foi encontrada nenhuma anotação a remover que corresponda a '{1}'."
#define STRING_CMD_DENO_NO           "Nenhuma anotação removida da tarefa."
#define STRING_CMD_DENO_1            "Removida(s) anotação(ôes) de {1} tarefa."
#define STRING_CMD_DENO_N            "Removida(s) anotação(ôes) de {1} tarefas."

#define STRING_CMD_IMPORT_USAGE      "Importa ficheiros JSON"
#define STRING_CMD_IMPORT_SUMMARY    "Importadas {1} tarefas."
#define STRING_CMD_IMPORT_NOFILE     "Necessita especificar o ficheiro a importar."
#define STRING_CMD_IMPORT_FILE       "A importar '{1}'"
#define STRING_TASK_NO_DESC          "Descrição da anotação em falta: {1}"
#define STRING_TASK_NO_ENTRY         "Data de entrada da anotação em falta: {1}"
#define STRING_CMD_SHELL_HELP1       "Insira um comando (ex. 'list'), ou pressione 'Enter'."
#define STRING_CMD_SHELL_HELP2       "Não é necessário incluir o comando 'task'."
#define STRING_CMD_SHELL_HELP3       "Insira 'quit' (ou 'bye', 'exit') para terminar a sessão."
#define STRING_CMD_SYNC_USAGE        "Sincroniza dados com o Taskserver"
#define STRING_CMD_SYNC_NO_SERVER    "Taskserver não está configurado."
#define STRING_CMD_SYNC_BAD_CRED     "Credenciais para o Taskserver incorretas."
#define STRING_CMD_SYNC_BAD_CERT     "Certificado do Taskserver em falta."
#define STRING_CMD_SYNC_BAD_KEY      "Chave do Taskserver em falta."
#define STRING_CMD_SYNC_ADD          "   adiciona {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "modifica {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "A sincronizar com {1}"
#define STRING_CMD_SYNC_SUCCESS0     "Sincronizado com sucesso."
#define STRING_CMD_SYNC_SUCCESS1     "Sincronizado com sucesso. {1} alterações enviadas."
#define STRING_CMD_SYNC_SUCCESS2     "Sincronizado com sucesso. {1} alterações recebidas."
#define STRING_CMD_SYNC_SUCCESS3     "Sincronizado com sucesso. {1} alterações enviadas, {2} alterações recebidas."
#define STRING_CMD_SYNC_SUCCESS_NOP  "Sincronizado com sucesso. Sem alterações."
#define STRING_CMD_SYNC_FAIL_ACCOUNT "Sincronização falhou. As suas credenciais estão incorretas, ou a sua conta no Taskserver não está ativa."
#define STRING_CMD_SYNC_FAIL_ERROR   "Sincronização falhou. O Taskserver devolveu o seguinte erro: {1} {2}"
#define STRING_CMD_SYNC_FAIL_CONNECT "Sincronização falhou. Não foi possível contactar ao Taskserver."
#define STRING_CMD_SYNC_BAD_SERVER   "Sincronização falhou. Erro no parametro de configuração '{1}'"
#define STRING_CMD_SYNC_NO_TLS       "O Taskwarrior foi compilado sem suporte de GnuTLS. A função de sincronização não está disponível."
#define STRING_CMD_SYNC_INIT         "Por favor confirme que deseja enviar todas as tarefas pendentes para o Taskserver"
#define STRING_CMD_SYNC_NO_INIT      "O Taskwarrior não irá executar a sincronização completa de primeira vez."
#define STRING_CMD_SYNC_RELOCATE0    "A sua conta no servidor foi relocalizada. Por favor ajuste a configuração usando:"
#define STRING_CMD_SYNC_RELOCATE1    "task config taskd.server {1}"  // |por-PRT|==|eng-USA|
#define STRING_CMD_SYNC_BAD_CA       "Certificado CA não encontrado."
#define STRING_CMD_SYNC_CONNECT      "Não foi possível connectar a {1} {2}"
#define STRING_CMD_SYNC_HANDSHAKE    "'Handshake' falhou. {1}"
#define STRING_CMD_SYNC_TRUST_CA     "Deve fornecer um certificado CA ou desactivar a verificação, mas não ambos."
#define STRING_CMD_DIAG_USAGE        "Plataforma, versão e detalhes de ambiente"
#define STRING_CMD_DIAG_PLATFORM     "Plataforma"
#define STRING_CMD_DIAG_UNKNOWN      "<desconhecido>"
#define STRING_CMD_DIAG_COMPILER     "Compilador"
#define STRING_CMD_DIAG_VERSION      "Versão"
#define STRING_CMD_DIAG_CAPS         "Capacidades"
#define STRING_CMD_DIAG_FEATURES     "Características da versão"
#define STRING_CMD_DIAG_BUILT        "Criado"
#define STRING_CMD_DIAG_COMMIT       "Commit"  // |por-PRT|==|eng-USA|
#define STRING_CMD_DIAG_FOUND        "(presente)"
#define STRING_CMD_DIAG_MISSING      "(em falta)"
#define STRING_CMD_DIAG_ENABLED      "Ativado"
#define STRING_CMD_DIAG_DISABLED     "Desativado"
#define STRING_CMD_DIAG_CONFIG       "Configuração"
#define STRING_CMD_DIAG_TESTS        "Testes"
#define STRING_CMD_DIAG_UUID_SCAN    "UUIDs duplicados em {1} tarefas:"
#define STRING_CMD_DIAG_UUID_DUP     "UUID duplicado {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "Nenhum duplicado encontrado"
#define STRING_CMD_DIAG_NONE         "-nenhum-"
#define STRING_CMD_HCOMMANDS_USAGE   "Gera uma lista com todos os comandos, para fins de terminação automática"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Gera uma lista com todos os comandos, para terminação automática em zsh"
#define STRING_CMD_ALIASES_USAGE     "Gera uma lista com todos os 'alias', para fins de terminação automática"
#define STRING_CMD_INSTALL_USAGE     "Instala extensões e scripts externos"

#define STRING_CMD_MODIFY_USAGE1     "Modifica a tarefa existente com os argumentos indicados."
#define STRING_CMD_MODIFY_NO_DUE     "Não pode criar tarefas recorrentes sem uma data de vencimento."
#define STRING_CMD_MODIFY_REM_DUE    "Não pode remover a data de vencimento de uma tarefa recorrente."
#define STRING_CMD_MODIFY_REC_ALWAYS "Não pode remover o attributo de recorrência de uma tarefa recorrente."
#define STRING_CMD_MODIFY_TASK       "A modificar a tarefa {1} '{2}'."
#define STRING_CMD_MODIFY_TASK_R     "A modificar a tarefa recorrente {1} '{2}'."
#define STRING_CMD_MODIFY_1          "Modificada {1} tarefa."
#define STRING_CMD_MODIFY_N          "Modificadas {1} tarefas."
#define STRING_CMD_MODIFY_NO         "Tarefa não modificada."
#define STRING_CMD_MODIFY_CONFIRM    "Modificar tarefa {1} '{2}'?"
#define STRING_CMD_MODIFY_RECUR      "Esta é uma tarefa recorrente. Deseja modificar todas as recorrências pendentes da mesma?"
#define STRING_CMD_MODIFY_NEED_TEXT  "É necessário fornecer mais informação."

#define STRING_CMD_COLOR_USAGE       "Todas as cores, uma amostra ou a legenda"
#define STRING_CMD_COLOR_HERE        "Estas são as cores actualmente em uso:"
#define STRING_CMD_COLOR_COLOR       "Cor"
#define STRING_CMD_COLOR_DEFINITION  "Definição"
#define STRING_CMD_COLOR_EXPLANATION "Use este comando para ver como as cores são apresentadas no seu terminal."
#define STRING_CMD_COLOR_16          "Modo 16-cores (suporta sublinhado, negrito e fundo brilhante):"
#define STRING_CMD_COLOR_256         "Modo 256-cores (suporta sublinhado):"
#define STRING_CMD_COLOR_YOURS       "A sua amostra:"
#define STRING_CMD_COLOR_BASIC       "Cores básicas"
#define STRING_CMD_COLOR_EFFECTS     "Efeitos"
#define STRING_CMD_COLOR_CUBE        "Cubo de cor rgb"
#define STRING_CMD_COLOR_RAMP        "Gradiente cinza"
#define STRING_CMD_COLOR_TRY         "Tente executar '{1}'."
#define STRING_CMD_COLOR_OFF         "O modo de cor encontra-se desactivado no seu ficheiro .taskrc. Para ativar cor, remova a linha 'color=off', ou altere de 'off' para 'on'."
#define STRING_CMD_CONFIG_USAGE      "Altera parametros na configuração do 'task'"
#define STRING_CMD_CONFIG_CONFIRM    "Tem a certeza que pretende alterar o valor de '{1}' de '{2}' para '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Tem a certeza que pretende adicionar '{1}' com o valor '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Tem a certeza que pretende remover '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "Não encontrada a entrada '{1}' ."
#define STRING_CMD_CONFIG_FILE_MOD   "Ficheiro de configuração {1} alterado."
#define STRING_CMD_CONFIG_NO_CHANGE  "Nenhuma alteração efectuada."
#define STRING_CMD_CONFIG_NO_NAME    "Especifique o nome da configuração a modificar."
#define STRING_CMD_HCONFIG_USAGE     "Lista todas as configurações suportadas, para fins de terminação automática"
#define STRING_CMD_CUSTOM_MISMATCH   "O número de colunas e de rótulos não é o mesmo no relatório '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} visiveis"
#define STRING_CMD_CUSTOM_COUNT      "1 tarefa"
#define STRING_CMD_CUSTOM_COUNTN     "{1} tarefas"
#define STRING_CMD_CUSTOM_TRUNCATED  "truncado a {1} linhas"
#define STRING_CMD_TIMESHEET_USAGE   "Sumário semanal de tarefas concluídas e iniciadas"
#define STRING_CMD_TIMESHEET_STARTED "Iniciadas ({1} tarefas)"
#define STRING_CMD_TIMESHEET_DONE    "Concluídas ({1} tarefas)"
#define STRING_CMD_BURN_USAGE_M      "Mostra um gráfico de burndown, por mês"
#define STRING_CMD_BURN_USAGE_W      "Mostra um gráfico de burndown, por semana"
#define STRING_CMD_BURN_USAGE_D      "Mostra um gráfico de burndown, por dia"
#define STRING_CMD_BURN_TITLE        "Burndown"  // |por-PRT|==|eng-USA|
#define STRING_CMD_BURN_TOO_SMALL    "Janela do terminal demasiado pequena para desenhar o gráfico."
#define STRING_CMD_BURN_DAILY        "Diário"
#define STRING_CMD_BURN_WEEKLY       "Semanal"
#define STRING_CMD_BURN_MONTHLY      "Mensal"
#define STRING_CMD_BURN_STARTED      "Inicia."          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Conclu."          // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Penden."          // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "Não converge"
#define STRING_CMD_HELP_USAGE        "Mostra este texto de ajuda"
#define STRING_CMD_HELP_USAGE_LABEL  "Uso:"
#define STRING_CMD_HELP_USAGE_DESC   "Executa rc.default.command, se especificado."
#define STRING_CMD_HELP_ALIASED      "'Alias'ado para '{1}'"
#define STRING_CMD_CAL_USAGE         "Mostra um calendário, com datas de vencimento assinaladas"
#define STRING_CMD_CAL_BAD_MONTH     "Argumento '{1}' não é um mês válido."
#define STRING_CMD_CAL_BAD_ARG       "Não foi possível reconhecer o argumento '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Data"
#define STRING_CMD_CAL_LABEL_HOL     "Feriado"
#define STRING_CMD_CAL_SUN_MON       "A variável de configuração 'weekstart' apenas pode conter 'domingo' ou 'segunda-feira'."
#define STRING_CMD_EDIT_USAGE        "Inicia um editor externo para modificar a tarefa diretamente"
#define STRING_CMD_CALC_USAGE        "Calculadora"

// Config
#define STRING_CONFIG_OVERNEST       "Ficheiro de configuração com inclusões a mais de 10 níveis de profundidade - isto certamente é um erro."
#define STRING_CONFIG_READ_INCLUDE   "Não foi possível ler o ficheiro incluído '{1}'."
#define STRING_CONFIG_INCLUDE_PATH   "Apenas é permitido incluir ficheiros com caminhos absolutos, não '{1}'"
#define STRING_CONFIG_BAD_ENTRY      "Entrada anómala '{1}' no ficheiro de configuração."
#define STRING_CONFIG_BAD_WRITE      "Não foi possível escrever para '{1}'."
#define STRING_CONFIG_DEPRECATED_COL "O seu ficheiro .taskrc contém relatórios com colunas obsoletas. Verifique entry_time, start_time e end_time em:"
#define STRING_CONFIG_DEPRECATED_VAR "O seu ficheiro .taskrc contém variáveis obsoletas:"

// Context
#define STRING_CONTEXT_CREATE_RC     "O ficheiro de configuração não foi encontrado em {1}\n\nDeseja criar um {2} como exemplo, para que o taskwarrior possa continuar?"
#define STRING_CONTEXT_NEED_RC       "Não é possível continuar sem um ficheiro rc."
#define STRING_CONTEXT_RC_OVERRIDE   "TASKRC alternativo em uso: {1}"
#define STRING_CONTEXT_DATA_OVERRIDE "TASKDATA alternativo em uso: {1}"
#define STRING_CONTEXT_SHADOW_P      "A variável de configuração 'shadow.file' está definida para " "sobrescrever as suas tarefas pendentes. Por favor, altere-a."
#define STRING_CONTEXT_SHADOW_C      "A variável de configuração 'shadow.file' está definida para " "sobrescrever as suas tarefas concluídas. Por favor, altere-a."
#define STRING_CONTEXT_SHADOW_U      "A variável de configuração 'shadow.file' está definida para " "sobrescrever o seu histórico de modificações. Por favor, altere-a."
#define STRING_CONTEXT_SHADOW_B      "A variável de configuração 'shadow.file' está definida para " "sobrescrever o seu ficheiro de acúmulo. Por favor, altere-a."
#define STRING_CONTEXT_SHADOW_UPDATE "[Arquivo shadow '{1}' atualizado.]"

// Date
#define STRING_DATE_INVALID_FORMAT   "'{1}' não é uma data válida no formato '{2}'."
#define STRING_DATE_BAD_WEEKSTART    "A variável de configuração 'weekstart' apenas pode conter 'domingo' ou 'segunda-feira'."

#define STRING_DATE_JANUARY_LONG     "janeiro"
#define STRING_DATE_FEBRUARY_LONG    "fevereiro"
#define STRING_DATE_MARCH_LONG       "março"
#define STRING_DATE_APRIL_LONG       "abril"
#define STRING_DATE_MAY_LONG         "maio"
#define STRING_DATE_JUNE_LONG        "junho"
#define STRING_DATE_JULY_LONG        "julho"
#define STRING_DATE_AUGUST_LONG      "agosto"
#define STRING_DATE_SEPTEMBER_LONG   "setembro"
#define STRING_DATE_OCTOBER_LONG     "outubro"
#define STRING_DATE_NOVEMBER_LONG    "novembro"
#define STRING_DATE_DECEMBER_LONG    "dezembro"

#define STRING_DATE_JANUARY_SHORT    "jan"  // |por-PRT|==|eng-USA|
#define STRING_DATE_FEBRUARY_SHORT   "fev"
#define STRING_DATE_MARCH_SHORT      "mar"  // |por-PRT|==|eng-USA|
#define STRING_DATE_APRIL_SHORT      "abr"
#define STRING_DATE_MAY_SHORT        "mai"
#define STRING_DATE_JUNE_SHORT       "jun"  // |por-PRT|==|eng-USA|
#define STRING_DATE_JULY_SHORT       "jul"  // |por-PRT|==|eng-USA|
#define STRING_DATE_AUGUST_SHORT     "ago"
#define STRING_DATE_SEPTEMBER_SHORT  "set"
#define STRING_DATE_OCTOBER_SHORT    "out"
#define STRING_DATE_NOVEMBER_SHORT   "nov"  // |por-PRT|==|eng-USA|
#define STRING_DATE_DECEMBER_SHORT   "dez"

#define STRING_DATE_SUNDAY_LONG      "domingo"
#define STRING_DATE_MONDAY_LONG      "segunda-feira"
#define STRING_DATE_TUESDAY_LONG     "terça-feira"
#define STRING_DATE_WEDNESDAY_LONG   "quarta-feira"
#define STRING_DATE_THURSDAY_LONG    "quinta-feira"
#define STRING_DATE_FRIDAY_LONG      "sexta-feira"
#define STRING_DATE_SATURDAY_LONG    "sábado"

#define STRING_DATE_SUNDAY_SHORT     "dom"
#define STRING_DATE_MONDAY_SHORT     "seg"
#define STRING_DATE_TUESDAY_SHORT    "ter"
#define STRING_DATE_WEDNESDAY_SHORT  "qua"
#define STRING_DATE_THURSDAY_SHORT   "qui"
#define STRING_DATE_FRIDAY_SHORT     "sex"
#define STRING_DATE_SATURDAY_SHORT   "sáb"

// dependency
#define STRING_DEPEND_BLOCKED        "Tarefa {1} encontra-se bloqueada por:"
#define STRING_DEPEND_BLOCKING       "e está a bloquear:"
#define STRING_DEPEND_FIX_CHAIN      "Deseja que a cadeia de dependências seja corrigida?"

// DOM
#define STRING_DOM_UNKNOWN           "<desconhecido>"
#define STRING_DOM_UNREC             "DOM: Não foi possível obter nome não reconhecido '{1}'."
#define STRING_DOM_CANNOT_SET        "DOM: Não foi possível definir '{1}'."

// Duration
#define STRING_DURATION_UNRECOGNIZED "A duração '{1}' não foi reconhecida como válid, com unidades corretas como '3days'."  // Can we translate '3days' to '3dias' ?

// E9
#define STRING_E9_UNSUPPORTED        "Operador não suportado '{1}'."
#define STRING_E9_NO_OPERANDS        "Não existem operandos para o operador '{1}'."
#define STRING_E9_INSUFFICIENT_OP    "Não existem operandos suficientes para o operador '{1}'."
#define STRING_E9_MORE_OP            "Operandos em excesso."

// edit
#define STRING_EDIT_NO_CHANGES       "Não foram detetadas alterações."
#define STRING_EDIT_NO_EDITS         "Nada editado."
#define STRING_EDIT_COMPLETE         "Edição concluída."
#define STRING_EDIT_LAUNCHING        "A iniciar '{1}' ..."
#define STRING_EDIT_CHANGES          "Alterações detetadas."
#define STRING_EDIT_UNPARSEABLE      "O taskwarrior não conseguiu processar as suas alterações. Deseja tentar novamente?"
#define STRING_EDIT_UNWRITABLE       "Não é possível escrever no diretório indicado por data.location."
#define STRING_EDIT_TAG_SEP          "Separe as marcas com espaços, por exemplo: marca1 marca2"
#define STRING_EDIT_DEP_SEP          "As dependências deverão ser uma lista de IDs/UUIDs ou intervalos de IDs, sem espaços e separados por vírgulas."
#define STRING_EDIT_UDA_SEP          "Atributos Definidos pelo Utilizador (UDAs)"
#define STRING_EDIT_UDA_ORPHAN_SEP   "Atributos Orfãos Definidos pelo Utilizador"
#define STRING_EDIT_END              "Fim"

#define STRING_EDIT_PROJECT_MOD      "Projeto modificado."
#define STRING_EDIT_PROJECT_DEL      "Projeto removido."
#define STRING_EDIT_PRIORITY_MOD     "Prioridade modificada."
#define STRING_EDIT_PRIORITY_DEL     "Prioridade removida."
#define STRING_EDIT_DESC_MOD         "Descrição modificada."
#define STRING_EDIT_DESC_REMOVE_ERR  "Não é possível remover a descrição."
#define STRING_EDIT_ENTRY_REMOVE_ERR "Não é possível remover a data de criação."
#define STRING_EDIT_ENTRY_MOD        "Data de criação modificada."
#define STRING_EDIT_START_MOD        "Data de início modificada."
#define STRING_EDIT_START_DEL        "Data de início removida."
#define STRING_EDIT_END_MOD          "Data de conclusão modificada."
#define STRING_EDIT_END_DEL          "Data de conclusão removida."
#define STRING_EDIT_END_SET_ERR      "Não é possível adicionar uma data de conclusão a uma tarefa pendente."
#define STRING_EDIT_SCHED_MOD        "Data de agendamento modificada."
#define STRING_EDIT_SCHED_DEL        "Data de agendamento removida."
#define STRING_EDIT_DUE_MOD          "Data de vencimento modificada."
#define STRING_EDIT_DUE_DEL          "Data de vencimento removida."
#define STRING_EDIT_DUE_DEL_ERR      "Não é possível remover a data de vencimento de uma tarefa recorrente."
#define STRING_EDIT_UNTIL_MOD        "Data 'até' modificada."
#define STRING_EDIT_UNTIL_DEL        "Data 'até' removida."
#define STRING_EDIT_RECUR_MOD        "Recorrência modificada."
#define STRING_EDIT_RECUR_DEL        "Recorrência removida."
#define STRING_EDIT_RECUR_DUE_ERR    "É obrigatório que tarefas recorrentes tenham uma data de vencimento."
#define STRING_EDIT_RECUR_ERR        "Duração de recorrência inválida."
#define STRING_EDIT_WAIT_MOD         "Data de espera modificada."
#define STRING_EDIT_WAIT_DEL         "Data de espera removida."
#define STRING_EDIT_PARENT_MOD       "UUID mãe modificado."
#define STRING_EDIT_PARENT_DEL       "UUID mãe removido."
#define STRING_EDIT_UDA_MOD          "UDA {1} modificado."
#define STRING_EDIT_UDA_DEL          "UDA {1} eliminado."

// These four blocks can be replaced, but the number of lines must not change.
#define STRING_EDIT_HEADER_1         "O comando 'task <id> edit' permite modificar todos os aspetos de uma tarefa"
#define STRING_EDIT_HEADER_2         "usando um editor de texto. Por baixo segue uma representação de todos os"
#define STRING_EDIT_HEADER_3         "detalhes da tarefa. Modifique o que deseja, e quando guardar e sair do seu"
#define STRING_EDIT_HEADER_4         "editor, o taskwarrior irá ler este ficheiro, identificar as alterações e"
#define STRING_EDIT_HEADER_5         "aplicá-las. Se sair do editor sem guardar ou fazer alterações, o taskwarrior"
#define STRING_EDIT_HEADER_6         "não irá fazer nada."

#define STRING_EDIT_HEADER_7         "Linhas começadas por # representam dados que não podem ser alterados, como ID."
#define STRING_EDIT_HEADER_8         "Se for demasiado criativo com a edição, o taskwarrior enviá-lo-à de volta"
#define STRING_EDIT_HEADER_9         "para o editor para corrigir eventuais erros."

#define STRING_EDIT_HEADER_10        "Caso este comportamento o atire para um ciclo infinito de re-edição do mesmo"
#define STRING_EDIT_HEADER_11        "ficheiro, apenas saia do editor sem fazer quaisquer alterações. O taskwarrior"
#define STRING_EDIT_HEADER_12        "irá ter isso em conta e interrompe a edição."

#define STRING_EDIT_HEADER_13        "As anotações são: <data> -- <texto> e pode haver um número variável das mesmas."
#define STRING_EDIT_HEADER_14        "O separador ' -- ' entre os campos data e texto deverá ser mantido."
#define STRING_EDIT_HEADER_15        "Segue-se uma \"linha em branco\" onde adicionar anotações para sua conveniência."

// Maintain the same spacing.
#define STRING_EDIT_TABLE_HEADER_1   "Nome               Detalhes editáveis"
#define STRING_EDIT_TABLE_HEADER_2   "-----------------  ----------------------------------------------------"  // |por-PRT|==|eng-USA|

// Errors
// TODO Move each of these to appropriate section.
#define STRING_ERROR_PREFIX          "Erro: "
#define STRING_UNKNOWN_ERROR         "Erro desconhecido."
#define STRING_TRIVIAL_INPUT         "Deve específicar um comando ou a tarefa a modificar."
#define STRING_ASSUME_INFO           "Nenhum comando especificado - assumindo 'information'."
#define STRING_INFINITE_LOOP         "Substituição terminada. Efectuadas mais de {1} alterações - protecção de ciclos infinitos."
#define STRING_UDA_TYPE              "Atributos definidos pelo utilizador (UDAs) apenas podem ser do tipo 'texto', 'data', 'duração' ou 'numérico'."
#define STRING_UDA_TYPE_MISSING      "uda.{1}.type não encontrado. É necessário especificar um tipo no 'UDA' '{1}'."
#define STRING_UDA_NUMERIC           "O valor '{1}' não é um valor numérico válido."
#define STRING_UDA_COLLISION         "O UDA '{1}' tem o mesmo nome que um atributo interno, tal não é permitido."
#define STRING_INVALID_MOD           "O atributo '{1}' não permite o valor '{2}'."
#define STRING_INVALID_SORT_COL      "A coluna '{1}' não pode ser ordenada."
#define STRING_TLS_INIT_FAIL         "Erro a iniciar componente TLS."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Nenhuma tarefa."
#define STRING_FEEDBACK_NO_TASKS_SP  "Nenhuma tarefa especificada."
#define STRING_FEEDBACK_NO_MATCH     "Nenhuma correspondência."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 tarefa)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} tarefas)"
#define STRING_FEEDBACK_DELETED      "{1} será eliminada."
#define STRING_FEEDBACK_DEP_SET      "As dependências serão alteradas para '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "As dependências serão alteradas de '{1}' para '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Eliminadas as dependências '{1}'."
#define STRING_FEEDBACK_DEP_WAS_SET  "Alteradas as dependências para '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Alteradas as dependências de '{1}' para '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} será definido como '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} será alterado de '{2}' para '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} eliminado."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} eliminado (duração: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} definido como '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} alterado de '{2}' para '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Adicionada anotação de '{1}'."
#define STRING_FEEDBACK_ANN_DEL      "Eliminada anotação '{1}'."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Anotação alterada para '{1}'."
#define STRING_FEEDBACK_NOP          "Não serão efetuadas alterações."
#define STRING_FEEDBACK_WAS_NOP      "Nenhuma alteração efetuada."
#define STRING_FEEDBACK_TAG_NOCOLOR  "A marca especial 'nocolor' irá desactivar as regras de cor nesta tarefa."
#define STRING_FEEDBACK_TAG_NONAG    "A marca especial 'nonag' irá prevenir avisos quando a tarefa é modificada."
#define STRING_FEEDBACK_TAG_NOCAL    "A marca especial 'nocal' irá manter esta tarefa ausente do relatório de 'calendário'."
#define STRING_FEEDBACK_TAG_NEXT     "A marca especial 'next' irá aumentar a urgência desta tarefa de modo a que apareça no relatório 'next'."
#define STRING_FEEDBACK_UNBLOCKED    "Desbloqueada {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Tarefa {1} '{2}' expirou e foi eliminada."

// File
#define STRING_FILE_PERMS            "O taskwarrior não encontrou as permissões corretas em '{1}'."

// helpers
#define STRING_HELPER_PROJECT_CHANGE "O projeto '{1}' foi alterado."
#define STRING_HELPER_PROJECT_COMPL  "Projeto '{1}' está {2}% concluído"
#define STRING_HELPER_PROJECT_REM    "(Restam {1} de {2} tarefas)."

// interactive
#define STRING_INTERACTIVE_WIDTH     "Context::getWidth: determina largura de {1} carateres"
#define STRING_INTERACTIVE_HEIGHT    "Context::getHeight: determina altura de {1} carateres"

// JSON
#define STRING_JSON_MISSING_VALUE    "Erro: valor em falta após ',' na posição {1}"
#define STRING_JSON_MISSING_VALUE2   "Erro: valor em falta na posição {1}"
#define STRING_JSON_MISSING_BRACKET  "Erro: ']' em falta na posição {1}"
#define STRING_JSON_MISSING_BRACE    "Erro: '}' em falta na posição {1}"
#define STRING_JSON_MISSING_COLON    "Erro: ':' em falta na posição {1}"
#define STRING_JSON_MISSING_OPEN     "Erro: esperado '{' ou '[' na posição {1}"
#define STRING_JSON_EXTRA_CHARACTERS "Erro: caracteres extra encontrados na posição {1}"

// Record
#define STRING_RECORD_EMPTY          "Registo vazio na entrada fornecida."
#define STRING_RECORD_JUNK_AT_EOL    "Caracteres desconhecidos no fim da linha."
#define STRING_RECORD_NOT_FF4        "Registo não reconhecido como formato 4."

// 'show' command
#define STRING_CMD_SHOW              "Mostra todas ou um subconjunto das variáveis de configuração"
#define STRING_CMD_SHOW_ARGS         "Apenas pode específicar 'all' ou uma expressão a procurar."
#define STRING_CMD_SHOW_NONE         "Nenhuma variável de configuração corresponde à procura."
#define STRING_CMD_SHOW_UNREC        "O seu ficheiro .taskrc contém as seguintes variávies desconhecidas:"
#define STRING_CMD_SHOW_DIFFER       "Algumas das variáveis no seu .taskrc diferem dos valores por defeito."
#define STRING_CMD_SHOW_EMPTY        "Erro de configuração: o ficheiro .taskrc não contém nenhuma entrada."
#define STRING_CMD_SHOW_DIFFER_COLOR "Estas estão realçadas com {1}."
#define STRING_CMD_SHOW_CONFIG_ERROR "Erro de configuração: {1} contém um valor desconhecido '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Erro de configuração: 'data.location' não especificada no ficheiro .taskrc ."
#define STRING_CMD_SHOW_LOC_EXIST    "Erro de configuração: 'data.location' contém um diretório que não existe ou não é accessível."
#define STRING_CMD_SHOW_CONF_VAR     "Variável de configuração"
#define STRING_CMD_SHOW_CONF_VALUE   "Valor"
#define STRING_CMD_SHOW_CONF_DEFAULT "Valor por defeito"
#define STRING_CMD_SHOWRAW           "Mostra todas as definições de configuração num formato legível por máquina"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior já não suporta o formato 1, originalmente usado entre 27-Novembro-2006 e 31-Dezembro-2007."
#define STRING_TASK_NO_FF2           "Taskwarrior já não suporta o formato 2, originalmente usado entre 1-Janeiro-2008 e 12-April-2009."
#define STRING_TASK_PARSE_ANNO_BRACK "Chavetas de anotação em falta."
#define STRING_TASK_PARSE_ATT_BRACK  "Chavetas de atributo em falta."
#define STRING_TASK_PARSE_TAG_BRACK  "Chavetas de marca em falta."
#define STRING_TASK_PARSE_TOO_SHORT  "Linha demasiado curta."
#define STRING_TASK_PARSE_UNREC_FF   "Formato taskwarrior não reconhecido."
#define STRING_TASK_DEPEND_ITSELF    "Uma tarefa não pode depender dela própria."
#define STRING_TASK_DEPEND_MISS_CREA "Não foi possível criar a dependência da tarefa {1} - esta não existe."
#define STRING_TASK_DEPEND_MISS_DEL  "Não foi possível eliminar a dependência da tarefa {1} - esta não existe."
#define STRING_TASK_DEPEND_DUP       "Tarefa {1} já depende da tarefa {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Dependência circular detetada e não permitida."
#define STRING_TASK_VALID_DESC       "Uma tarefa necessita de uma descrição."
#define STRING_TASK_VALID_BLANK      "Não é possível adicionar uma tarefa em branco."
#define STRING_TASK_VALID_BEFORE     "Aviso: Especificou que a data de '{1}' é posterior à data de '{2}'."
#define STRING_TASK_VALID_REC_DUE    "Uma tarefa recorrente necessita de uma data de vencimento."
#define STRING_TASK_VALID_RECUR      "O valor de recorrência '{1}' não é válido."
#define STRING_TASK_VALID_PRIORITY   "Valores de prioridade podem ser 'A', 'M' ou 'B', não '{1}'."
#define STRING_TASK_SAFETY_VALVE     "Este comando não possui um filtro e irá modificar todas as tarefas. Tem a certeza?"
#define STRING_TASK_SAFETY_FAIL      "Execução do comando abortada."

// TDB2
#define STRING_TDB2_PARSE_ERROR      " em {1} na linha {2}"
#define STRING_TDB2_UUID_NOT_UNIQUE  "Não é possível adicionar a tarefa porque o 'uuid' '{1}' não é único."
#define STRING_TDB2_MISSING          "Em falta                      {1}  \"{2}\""
#define STRING_TDB2_NO_UNDO          "Não existem alterações que possam ser revertidas."
#define STRING_TDB2_LAST_MOD         "A última modificação foi feita {1}"
#define STRING_TDB2_UNDO_PRIOR       "Valores anteriores"
#define STRING_TDB2_UNDO_CURRENT     "Valores atuais"
#define STRING_TDB2_DIFF_PREV        "--- estado prévio "             // Same length
#define STRING_TDB2_DIFF_PREV_DESC   "Reverter restaurará este estado"//   ||
#define STRING_TDB2_DIFF_CURR        "+++ estado atual  "             // Same length
#define STRING_TDB2_DIFF_CURR_DESC   "Alteração efetuada {1}"
#define STRING_TDB2_UNDO_CONFIRM     "O comando 'undo' não é reversível. Tem a certeza que deseja reverter para o estado anterior?"
#define STRING_TDB2_MISSING_UUID     "Não foi possível localizar o UUID na tarefa a reverter."
#define STRING_TDB2_REVERTED         "Tarefa modificada revertida."
#define STRING_TDB2_REMOVED          "Tarefa removida."
#define STRING_TDB2_UNDO_COMPLETE    "Reversão concluída."
#define STRING_TDB2_UNDO_SYNCED      "Não é possível reverter a alteração porque a tarefa já foi syncronizada. Em vez disso modifique a tarefa."

// text
                                     // A comma-separated list of commands is appended.
#define STRING_TEXT_AMBIGUOUS        "Ambíguo {1} '{2}' - pode ser qualquer um de "

// utf8
#define STRING_UTF8_INVALID_CP_REP   "Representação de 'codepoint' inválida."
#define STRING_UTF8_INVALID_CP       "'Codepoint' Unicode inválido."

// View
#define STRING_VIEW_TOO_SMALL        "O relatório tem uma largura mínima de {1} e não cabe na largura disponível {2}."

// Usage text.  This is an exception, and contains \n characters and formatting.
#define STRING_CMD_HELP_TEXT \
  "A documentação do Taskwarrior pode ser encontrada usando 'man task', 'man taskrc', 'man " \
  "task-tutorial', 'man task-color', 'man task-faq', 'man task-synch' ou em " \
  "http://taskwarrior.org\n" \
  "\n" \
  "A forma geral dos comandos é:\n" \
  "  task [<filter>] <command> [<mods>]\n" \
  "\n" \
  "<filter> consiste de zero ou mais restrições com base nas quais as tarefas são selecionadas, " \
  "como:\n" \
  "  task                                      <command> <mods>\n" \
  "  task 28                                   <command> <mods>\n" \
  "  task +fimdesemana                         <command> <mods>\n" \
  "  task project:Casa due.before:hoje         <command> <mods>\n" \
  "  task ebeeab00-ccf8-464b-8b58-f7f2d606edfb <command> <mods>\n" \
  "\n" \
  "Por defeito, elementros filtro são combinados com um implícito operador 'and', mas " \
  "'or' ou 'xor' também podem ser usados, desde que sejam utilizados parêntesis:\n" \
  "  task '(/[Cc]at|[Dd]og/ or /[0-9]+/)'      <command> <mods>\n" \
  "\n" \
  "Um filtro pode dizer respeito a tarefas específicas utilizando o ID ou UUID da mesma. " \
  "Para especificar múltiplas tarefas use uma das seguintes formas:\n" \
  "  task 1,2,3                                    delete\n" \
  "  task 1-3                                      info\n" \
  "  task 1,2-5,19                                 modify pri:H\n" \
  "  task 4-7 ebeeab00-ccf8-464b-8b58-f7f2d606edfb info\n" \
  "\n" \
  "<mods> consiste em zero ou mais alterações a aplicar nas tarefas selecionadas, " \
  "como:\n" \
  "  task <filter> <command> project:Home\n" \
  "  task <filter> <command> +weekend +garden due:tomorrow\n" \
  "  task <filter> <command> Description/annotation text\n" \
  "\n" \
  "Marcas são palavras arbitrárias, em qualquer quantidade:\n" \
  "  +marca       + significa adiciona a marca\n" \
  "  -marca       - significa remove a marca\n" \
  "\n" \
  "Atributos internos:\n" \
  "  description:    Descrição da tarefa\n" \
  "  status:         Estado da tarefa - pendente, concluída, eliminada, adiada\n" \
  "  project:        Nome de projeto\n" \
  "  priority:       Prioridade\n" \
  "  due:            Data de vencimento\n" \
  "  recur:          Frequência de recorrência\n" \
  "  until:          Data de caducidade da tarefa\n" \
  "  limit:          Número desejado de linhas num relatório ou 'page'\n" \
  "  wait:           Data a partir da qual a tarefa fica pendente\n" \
  "  entry:          Data de criação da tarefa\n" \
  "  end:            Data de conclusão/remoção da tarefa\n" \
  "  start:          Data de início da tarefa\n" \
  "  scheduled:      Data de agendamento de início de tarefa\n" \
  "  depends:        Outras tarefas das quais esta depende\n" \
  "\n" \
  "Os modificadores de atributos tornam os filtros mais precisos. Modificados suportados são:\n" \
  "  before     (sinónimos under, below)\n" \
  "  after      (sinónimos over, above)\n" \
  "  none\n" \
  "  any\n" \
  "  is         (sinónimos equals)\n" \
  "  isnt       (sinónimos not)\n" \
  "  has        (sinónimos contains)\n" \
  "  hasnt\n" \
  "  startswith (sinónimos left)\n" \
  "  endswith   (sinónimos right)\n" \
  "  word\n" \
  "  noword\n" \
  "\n" \
  "Em alternativa, as seguintes operações algebraicas são suportadas:\n" \
  "  and  or  xor            Operadores lógicos\n" \
  "  <  <=  =  !=  >=  >     Operadores relacionais\n" \
  "  (  )                    Precedência\n" \
  "\n" \
  "  task due.before:eom priority.not:B   list\n" \
  "  task '(due < eom or priority != B)'  list\n" \
  "\n" \
  "O ficheiro .taskrc por defeito pode ser alterado usando:\n" \
  "  task ... rc:<ficheiro alternativo> ...\n" \
  "  task ... rc:~/.alt_taskrc ...\n" \
  "\n" \
  "Os valores no ficheiro .taskrc (ou alternativo) podem ser alterados com:\n" \
  "  task ... rc.<nome>=<valor> ...\n" \
  "  task rc.color=off list\n" \
  "\n" \
  "Qualquer nome de comando ou atributo pode ser abreviado desde que seja único:\n" \
  "  task list project:Casa\n" \
  "  task li       pro:Casa\n" \
  "\n" \
  "As descrições de algumas tarefas têm que ser 'escapadas' caso contrário serão interpretadas pela 'shell':\n" \
  "  task add \"citando ' citação\"\n" \
  "  task add escapando \\' citação\n" \
  "\n" \
  "O argumento -- diz ao taskwarrior para considerar todos os argumentos seguintes como parte da descrição, " \
  "mesmo se à primeira vista fossem interpretados como atributos ou marcas:\n" \
  "  task add -- project:Casa precisa revisão\n" \
  "\n" \
  "Muitos caracteres têm significado especial na 'shell', incluindo:\n" \
  "  $ ! ' \" ( ) ; \\ ` * ? { } [ ] < > | & % # ~\n" \
  "\n"

/*
  To be included later, before the 'precendence' line.

  "  +  -                    Adição, subtração\n" \
  "  !                       Inversão\n" \
  "  ~  !~                   Coíncide, Não coíncide\n" \
*/

// util
#define STRING_UTIL_CONFIRM_YN       " (sim/não) "
#define STRING_UTIL_CONFIRM_YES      "sim"
#define STRING_UTIL_CONFIRM_YES_U    "Sim"
#define STRING_UTIL_CONFIRM_NO       "não"
#define STRING_UTIL_CONFIRM_ALL      "todas"
#define STRING_UTIL_CONFIRM_ALL_U    "Todas"
#define STRING_UTIL_CONFIRM_QUIT     "Sair"
#define STRING_UTIL_GIBIBYTES        "GiB"  // |por-PRT|==|eng-USA|
#define STRING_UTIL_MEBIBYTES        "MiB"  // |por-PRT|==|eng-USA|
#define STRING_UTIL_KIBIBYTES        "KiB"  // |por-PRT|==|eng-USA|
#define STRING_UTIL_BYTES            "B"  // |por-PRT|==|eng-USA|

// shell
#define STRING_SHELL_USAGE \
  "Uso: tasksh [<ficheiro-comandos>]  Executa os comandos 'task' contidos no <ficheiro-comandos>\n" \
  "                                   se fornecido ou alternativamente inicia a shell interativa.\n" \
  "     tasksh --version              Mostra a versão do taskwarrior.\n" \
  "     tasksh --help                 Mostra esta ajuda.\n"

#define STRING_SHELL_NO_FILE         "O ficheiro de input não existe.\n"

#endif

