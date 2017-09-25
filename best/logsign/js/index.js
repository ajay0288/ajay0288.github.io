$(document).ready(function () {
    $("#lfb").click(function () {
        $("#lrfb").prop('checked', true);
        $("#login").hide(100);
        $("#login").show(2000);
        $("#text").text('FACEBOOK LOGIN');
    });
    $("#lli").click(function () {
        $("#lrli").prop('checked', true);
        $("#login").hide(100);
        $("#login").show(2000);
        $("#text").text('LINKED IN LOGIN');
    });
    $("#lgmail").click(function () {
        $("#lrgmail").prop('checked', true);
        $("#login").hide(100);
        $("#login").show(2000);
        $("#text").text('GMAIL LOGIN');
    });
    $("#lgit").click(function () {
        $("#lrgit").prop('checked', true);
        $("#login").hide();
        $("#login").show(2000);
        $("#text").text('GITHUB LOGIN');
    });
    $("#sfb").click(function () {
        $("#srfb").prop('checked', true);
        $("#signup").hide();
        $("#signup").fadeIn(2000);
        $("#text1").text('FACEBOOK SIGNUP');
    });
    $("#sli").click(function () {
        $("#srli").prop('checked', true);
        $("#signup").hide();
        $("#signup").fadeIn(2000);
        $("#text1").text('LINKED IN SIGNUP');
    });
    $("#sgmail").click(function () {
        $("#srgmail").prop('checked', true);
        $("#signup").hide();
        $("#signup").fadeIn(2000);
        $("#text1").text('GMAIL SIGNUP');
    });
    $("#sgit").click(function () {
        $("#srgit").prop('checked', true);
        $("#signup").hide();
        $("#signup").fadeIn(2000);
        $("#text1").text('GITHUB SIGNUP');
    });
});